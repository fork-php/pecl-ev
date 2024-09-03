#include "embed.h"

/*  Patch by Christoph M. Becker */
#if defined(_WIN32) && defined(PHP_EV_USE_SOCKETS)
# undef errno
# define errno (*_errno())
#endif

#include "./libev/ev.c"
