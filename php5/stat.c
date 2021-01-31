/*
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2021 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Ruslan Osmanov <osmanov@php.net>                             |
   +----------------------------------------------------------------------+
*/
#include "watcher.h"

/* {{{ php_ev_stat_to_zval */
static void php_ev_stat_to_zval(const ev_statdata *st, zval *z)
{
	array_init(z);

	add_assoc_long(z, "dev",   st->st_dev);
	add_assoc_long(z, "ino",   st->st_ino);
	add_assoc_long(z, "mode",  st->st_mode);
	add_assoc_long(z, "nlink", st->st_nlink);
	add_assoc_long(z, "uid",   st->st_uid);
	add_assoc_long(z, "size",  st->st_size);
	add_assoc_long(z, "gid",   st->st_gid);
#ifdef HAVE_ST_RDEV
	add_assoc_long(z, "rdev", st->st_rdev);
#else
	add_assoc_long(z, "rdev", -1);
#endif

#ifdef HAVE_ST_BLKSIZE
	add_assoc_long(z, "blksize", st->st_blksize);
#else
	add_assoc_long(z, "blksize", -1);
#endif
#ifdef HAVE_ST_BLOCKS
	add_assoc_long(z, "blocks", st->st_blocks);
#else
	add_assoc_long(z, "blocks", -1);
#endif

	add_assoc_long(z, "atime", st->st_atime);
	add_assoc_long(z, "mtime", st->st_mtime);
	add_assoc_long(z, "ctime", st->st_ctime);
}
/* }}} */

/* {{{ php_ev_stat_object_ctor */
void php_ev_stat_object_ctor(INTERNAL_FUNCTION_PARAMETERS, zval *loop, zend_bool ctor, zend_bool start)
{
	char                  *path;
	int                    path_len;
	double                 interval;
	zval                  *self         = NULL;
	php_ev_object         *o_self;
	php_ev_object         *o_loop;
	ev_stat               *w;
	php_ev_stat           *stat_ptr;

	zval                  *data         = NULL;
	zend_fcall_info        fci          = empty_fcall_info;
	zend_fcall_info_cache  fcc          = empty_fcall_info_cache;
	long                   priority     = 0;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "pdf|z!l",
				&path, &path_len, &interval, &fci, &fcc,
				&data, &priority) == FAILURE) {
		return;
	}

	if (ctor) {
		self = getThis();
	} else {
		PHP_EV_INIT_CLASS_OBJECT(return_value, ev_stat_class_entry_ptr);
		self = return_value;
	}

	if (!loop) {
		loop = php_ev_default_loop(TSRMLS_C);
	}

	stat_ptr = (php_ev_stat *) emalloc(sizeof(php_ev_stat));
	memset(stat_ptr, 0, sizeof(php_ev_stat));

	stat_ptr->path = estrndup(path, path_len);

	w = &stat_ptr->stat;

	o_self = (php_ev_object *) zend_object_store_get_object(self TSRMLS_CC);
	o_loop = (php_ev_object *) zend_object_store_get_object(loop TSRMLS_CC);

	php_ev_set_watcher((ev_watcher *)w, sizeof(ev_stat), self,
			PHP_EV_LOOP_OBJECT_FETCH_FROM_OBJECT(o_loop),
			&fci, &fcc, data, priority TSRMLS_CC);

	w->type = EV_STAT;

	ev_stat_set(w, stat_ptr->path, interval);

	o_self->ptr = (void *) stat_ptr;

	if (start) {
		PHP_EV_WATCHER_START(ev_stat, w);
	}
}
/* }}} */

/* {{{ proto EvStat::__construct(string path, double interval, callable callback[, mixed data = NULL[, int priority = 0]]) */
PHP_METHOD(EvStat, __construct)
{
	PHP_EV_WATCHER_CTOR(stat, NULL);
}
/* }}} */

/* {{{ proto EvStat::createStopped(string path, double interval, callable callback[, mixed data = NULL[, int priority = 0]]) */
PHP_METHOD(EvStat, createStopped)
{
	PHP_EV_WATCHER_FACTORY_NS(stat, NULL);
}
/* }}} */

/* {{{ proto void EvStat::set(string path, double interval) */
PHP_METHOD(EvStat, set)
{
	char          *path;
	int            path_len;
	double         interval;
	ev_stat       *w;
	php_ev_stat   *stat_ptr;
	php_ev_object *ev_obj;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "pd",
				&path, &path_len, &interval) == FAILURE) {
		return;
	}

	w = (ev_stat *) PHP_EV_WATCHER_FETCH_FROM_THIS();

	ev_obj       = (php_ev_object *) zend_object_store_get_object(getThis() TSRMLS_CC);
	stat_ptr     = (php_ev_stat *) PHP_EV_WATCHER_FETCH_FROM_OBJECT(ev_obj);
	w = (ev_stat *) stat_ptr;

	PHP_EV_ASSERT(stat_ptr->path);
	efree(stat_ptr->path);
	stat_ptr->path = estrndup(path, path_len);

	PHP_EV_WATCHER_RESET(ev_stat, w, (w, stat_ptr->path, interval));
}
/* }}} */

/* {{{ proto mixed EvStat::attr(void) */
PHP_METHOD(EvStat, attr)
{
	ev_stat     *w;
	ev_statdata *st;

	if (zend_parse_parameters_none() == FAILURE) {
		return;
	}

	w  = (ev_stat *) PHP_EV_WATCHER_FETCH_FROM_THIS();
	st = &w->attr;

	if (!st->st_nlink) {
		RETURN_FALSE;
	}

	php_ev_stat_to_zval(st, return_value);
}
/* }}} */

/* {{{ proto mixed EvStat::prev(void) */
PHP_METHOD(EvStat, prev)
{
	ev_stat     *w;
	ev_statdata *st;

	if (zend_parse_parameters_none() == FAILURE) {
		return;
	}

	w  = (ev_stat *) PHP_EV_WATCHER_FETCH_FROM_THIS();
	st = &w->prev;

	if (!st->st_nlink) {
		RETURN_FALSE;
	}

	php_ev_stat_to_zval(st, return_value);
}
/* }}} */

/* {{{ proto bool EvStat::stat(void) */
PHP_METHOD(EvStat, stat)
{
	php_ev_object *ev_obj;
	ev_stat       *w;
	ev_statdata   *st;

	if (zend_parse_parameters_none() == FAILURE) {
		return;
	}

	ev_obj = (php_ev_object *) zend_object_store_get_object(getThis() TSRMLS_CC);
	w      = (ev_stat *) PHP_EV_WATCHER_FETCH_FROM_OBJECT(ev_obj);

	st = &w->attr;

	ev_stat_stat(PHP_EV_LOOP_FETCH_FROM_OBJECT(ev_obj), w);

	if (st->st_nlink) {
		RETURN_TRUE;
	}
	RETURN_FALSE;
}
/* }}} */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 sts=4 fdm=marker
 * vim<600: noet sw=4 ts=4 sts=4
 */
