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
#ifndef PHP_EV_COMMON_H
#define PHP_EV_COMMON_H

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <php.h>
#include <php_ini.h>
#include <SAPI.h>
#include <zend_interfaces.h>
#include <ext/standard/info.h>
#include <ext/standard/php_string.h>
#include <Zend/zend_extensions.h>

#include <php_network.h>
#include <php_streams.h>

#if HAVE_SOCKETS || defined(COMPILE_DL_SOCKETS)
# define PHP_EV_USE_SOCKETS
# include <ext/sockets/php_sockets.h>
#endif

#ifdef ZTS
# include "TSRM.h"
#endif

#endif /* PHP_EV_COMMON_H */
/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
