/*
   +----------------------------------------------------------------------+
   | PHP Version 8                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2024 The PHP Group                                |
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

/* {{{ php_ev_idle_object_ctor */
void php_ev_idle_object_ctor(INTERNAL_FUNCTION_PARAMETERS, zval *loop, zend_bool ctor, zend_bool start)
{
	zval          *self;
	zval          *data     = NULL;
	zval          *callback;
	php_ev_object *o_self;
	ev_idle       *w;
	zend_long      priority = 0;

	if (zend_parse_parameters(ZEND_NUM_ARGS(), "z|z!l",
				&callback, &data, &priority) == FAILURE) {
		return;
	}

	if (ctor) {
		self = getThis();
	} else {
		object_init_ex(return_value, ev_idle_class_entry_ptr);
		self = return_value;
	}

	if (!loop) {
		loop = php_ev_default_loop();
	}

	PHP_EV_NEW_WATCHER(w, ev_idle, EV_IDLE, self, loop, callback, data, priority);

	o_self = Z_EV_OBJECT_P(self);
	o_self->ptr = (void *) w;

	if (start) {
		PHP_EV_WATCHER_START(ev_idle, w);
	}
}
/* }}} */

/* {{{ proto EvIdle::__construct(callable callback[, mixed data = NULL[, int priority = 0]]) */
PHP_METHOD(EvIdle, __construct)
{
	PHP_EV_WATCHER_CTOR(idle, NULL);
}
/* }}} */

/* {{{ proto EvIdle::createStopped(callable callback[, mixed data = NULL[, int priority = 0]]) */
PHP_METHOD(EvIdle, createStopped)
{
	PHP_EV_WATCHER_FACTORY_NS(idle, NULL);
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
