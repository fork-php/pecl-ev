/*
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2011 The PHP Group                                |
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
#ifndef PHP_EV_FE_H
#define PHP_EV_FE_H

#include "embed.h"

/* {{{ EvLoop */
PHP_METHOD(EvLoop, __construct);
PHP_METHOD(EvLoop, default_loop);
PHP_METHOD(EvLoop, loop_fork);
PHP_METHOD(EvLoop, verify);
PHP_METHOD(EvLoop, invoke_pending);
PHP_METHOD(EvLoop, now_update);
PHP_METHOD(EvLoop, suspend);
PHP_METHOD(EvLoop, resume);
PHP_METHOD(EvLoop, supported_backends);
PHP_METHOD(EvLoop, recommended_backends);
PHP_METHOD(EvLoop, embeddable_backends);
PHP_METHOD(EvLoop, sleep);
PHP_METHOD(EvLoop, time);
PHP_METHOD(EvLoop, now);
PHP_METHOD(EvLoop, run);
PHP_METHOD(EvLoop, break);
PHP_METHOD(EvLoop, feed_signal);
PHP_METHOD(EvLoop, feed_signal_event);
/* }}} */

/* {{{ EvWatcher */
/* PHP_METHOD(EvWatcher, __construct); */
PHP_METHOD(EvWatcher, start);
PHP_METHOD(EvWatcher, stop);
PHP_METHOD(EvWatcher, clear);
PHP_METHOD(EvWatcher, invoke);
PHP_METHOD(EvWatcher, feed);
PHP_METHOD(EvWatcher, get_loop);
PHP_METHOD(EvWatcher, keepalive);
PHP_METHOD(EvWatcher, set_callback);
/* }}} */

/* {{{ EvIo */
PHP_METHOD(EvIo, __construct);
PHP_METHOD(EvIo, set);
/* }}} */

/* {{{ EvTimer */
PHP_METHOD(EvTimer, __construct);
PHP_METHOD(EvTimer, set);
PHP_METHOD(EvTimer, again);
/* }}} */

/* {{{ EvPeriodic */
PHP_METHOD(EvPeriodic, __construct);
PHP_METHOD(EvPeriodic, set);
/* }}} */

#endif /* PHP_EV_FE_H */

/* 
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * vim600: fdm=marker
 * vim: noet sts=4 sw=4 ts=4
 */
