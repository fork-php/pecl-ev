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

#include "php_ev.h"
#include "util.h"
#include "zend_exceptions.h"

/* {{{ php_ev_zval_to_fd
 * Get numeric file descriptor from PHP stream or Socket resource */
php_socket_t php_ev_zval_to_fd(zval *pfd)
{
	php_socket_t  file_desc = -1;
	php_stream   *stream;
#ifdef PHP_EV_USE_SOCKETS
	php_socket   *php_sock;
#endif

	if (Z_TYPE_P(pfd) == IS_RESOURCE) {
		/* PHP stream or PHP socket resource  */
		if ((stream = (php_stream *)zend_fetch_resource2(Z_RES_P(pfd), NULL, php_file_le_stream(), php_file_le_pstream())) != NULL) {
			if (php_stream_is(stream, PHP_STREAM_IS_MEMORY) || php_stream_is(stream, PHP_STREAM_IS_TEMP)) {
				zend_throw_exception(zend_ce_exception,
						"Cannot fetch file descriptor from memory based stream", 0);
				return -1;
			}

			php_stream_from_zval_no_verify(stream, pfd);

			if (stream == NULL) {
				zend_throw_exception(zend_ce_exception, "Stream resource is invalid", 0);
				return -1;
			}

			/* PHP stream */
			if (php_stream_can_cast(stream, PHP_STREAM_AS_FD_FOR_SELECT) == SUCCESS) {
				if (php_stream_cast(stream, PHP_STREAM_AS_FD_FOR_SELECT,
							(void *) &file_desc, 1) != SUCCESS || file_desc < 0) {
					return -1;
				}
			} else if (php_stream_can_cast(stream, PHP_STREAM_AS_FD) == SUCCESS) {
				if (php_stream_cast(stream, PHP_STREAM_AS_FD,
							(void *) &file_desc, 1) != SUCCESS || file_desc < 0) {
					return -1;
				}
			} else if (php_stream_can_cast(stream, PHP_STREAM_AS_STDIO) == SUCCESS) {
				if (php_stream_cast(stream, PHP_STREAM_AS_STDIO,
							(void *) &file_desc, 1) != SUCCESS || file_desc < 0) {
					return -1;
				}
			} else { /* STDIN, STDOUT, STDERR etc. */
				file_desc = Z_LVAL_P(pfd);
			}
		} else {
			zend_throw_exception(zend_ce_exception,
					"valid PHP stream resource expected", 0);
			return -1;
		}
#ifdef PHP_EV_USE_SOCKETS
	} else if (Z_TYPE_P(pfd) == IS_OBJECT && Z_OBJCE_P(pfd) == socket_ce) {
		php_sock = Z_SOCKET_P(pfd);
		if (php_sock->error) {
			if (!php_sock->blocking && php_sock->error == EINPROGRESS) {
#ifdef PHP_EVENT_DEBUG
				php_error_docref(NULL, E_NOTICE, "Operation in progress");
#endif
			} else {
				return -1;
			}
		}
		return php_sock->bsd_socket;
#endif
	} else if (Z_TYPE_P(pfd) == IS_LONG) {
		/* Numeric fd */
		file_desc = Z_LVAL_P(pfd);
		if (file_desc < 0) {
			zend_throw_exception(zend_ce_exception, "Invalid file descriptor", 0);
			return -1;
		}
	} else {
		zend_throw_exception(zend_ce_exception, "Invalid file descriptor", 0);
		return -1;
	}

	return file_desc;
}
/* }}} */

/**
 * @note `error` must be freed, if not NULL
 */
int php_ev_import_func_info(php_ev_func_info *pf, zval *zcb, char *error)/*{{{*/
{
	if (zcb) {
		zend_fcall_info_cache  fcc;
		zend_object           *obj_ptr;

		if (!zend_is_callable_ex(zcb, NULL, 0, NULL, &fcc, &error)) {
			return FAILURE;
		}

		PHP_EV_EFREE(error);

		pf->ce       = fcc.calling_scope;
		pf->func_ptr = fcc.function_handler;
		obj_ptr      = fcc.object;

		if (Z_TYPE_P(zcb) == IS_OBJECT) {
			ZVAL_COPY(&pf->closure, zcb);
		} else {
			ZVAL_UNDEF(&pf->closure);
		}

		if (obj_ptr && !(pf->func_ptr->common.fn_flags & ZEND_ACC_STATIC)) {
			ZVAL_OBJ(&pf->obj, obj_ptr);
			Z_ADDREF(pf->obj);
		} else {
			ZVAL_UNDEF(&pf->obj);
		}
	} else {
		pf->ce       = NULL;
		pf->func_ptr = NULL;
		ZVAL_UNDEF(&pf->closure);
		ZVAL_UNDEF(&pf->obj);
	}

	return SUCCESS;
}
/*}}}*/

void php_ev_func_info_free(php_ev_func_info *pf, zend_bool self)/*{{{*/
{
	if (!Z_ISUNDEF(pf->obj)) {
		zval_ptr_dtor(&pf->obj);
		ZVAL_UNDEF(&pf->obj);
	}
	if (!Z_ISUNDEF(pf->closure)) {
		zval_ptr_dtor(&pf->closure);
		ZVAL_UNDEF(&pf->closure);
	}
	if (self != FALSE) {
		efree(pf);
	}
}
/*}}}*/

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 sts=4 fdm=marker
 * vim<600: noet sw=4 ts=4 sts=4
 */
