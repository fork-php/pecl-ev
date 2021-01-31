/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: d9d6860cbc7746f3b86cd2883f0f96fd6ac0f2c9 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Ev_supportedBackends, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Ev_recommendedBackends arginfo_class_Ev_supportedBackends

#define arginfo_class_Ev_embeddableBackends arginfo_class_Ev_supportedBackends

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Ev_sleep, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Ev_time, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Ev_feedSignal, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, signum, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Ev_feedSignalEvent arginfo_class_Ev_feedSignal

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Ev_run, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_class_Ev_now arginfo_class_Ev_time

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Ev_stop, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, how, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_class_Ev_iteration arginfo_class_Ev_supportedBackends

#define arginfo_class_Ev_depth arginfo_class_Ev_supportedBackends

#define arginfo_class_Ev_backend arginfo_class_Ev_supportedBackends

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Ev_nowUpdate, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Ev_suspend arginfo_class_Ev_nowUpdate

#define arginfo_class_Ev_resume arginfo_class_Ev_nowUpdate

#define arginfo_class_Ev_verify arginfo_class_Ev_nowUpdate

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_EvLoop___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "Ev::FLAG_AUTO")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, io_interval, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timeout_interval, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvLoop_defaultLoop, 0, 0, EvLoop, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "Ev::FLAG_AUTO")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, io_interval, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timeout_interval, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

#define arginfo_class_EvLoop_loopFork arginfo_class_Ev_nowUpdate

#define arginfo_class_EvLoop_verify arginfo_class_Ev_nowUpdate

#define arginfo_class_EvLoop_invokePending arginfo_class_Ev_nowUpdate

#define arginfo_class_EvLoop_nowUpdate arginfo_class_Ev_nowUpdate

#define arginfo_class_EvLoop_suspend arginfo_class_Ev_nowUpdate

#define arginfo_class_EvLoop_resume arginfo_class_Ev_nowUpdate

#define arginfo_class_EvLoop_backend arginfo_class_Ev_supportedBackends

#define arginfo_class_EvLoop_now arginfo_class_Ev_time

#define arginfo_class_EvLoop_run arginfo_class_Ev_run

#define arginfo_class_EvLoop_stop arginfo_class_Ev_stop

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvLoop_io, 0, 3, EvIo, 0)
	ZEND_ARG_TYPE_INFO(0, fd, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, events, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvLoop_timer, 0, 3, EvTimer, 0)
	ZEND_ARG_TYPE_INFO(0, after, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, repeat, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#if EV_PERIODIC_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvLoop_periodic, 0, 4, EvPeriodic, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, reschedule_cb, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_SIGNAL_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvLoop_signal, 0, 2, EvSignal, 0)
	ZEND_ARG_TYPE_INFO(0, signum, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_CHILD_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvLoop_child, 0, 3, EvChild, 0)
	ZEND_ARG_TYPE_INFO(0, pid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, trace, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_STAT_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvLoop_stat, 0, 3, EvStat, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_IDLE_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvLoop_idle, 0, 1, EvIdle, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_CHECK_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvLoop_check, 0, 0, EvCheck, 0)
ZEND_END_ARG_INFO()
#endif

#if EV_PREPARE_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvLoop_prepare, 0, 0, EvPrepare, 0)
ZEND_END_ARG_INFO()
#endif

#if EV_EMBED_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvLoop_embed, 0, 0, EvEmbed, 0)
ZEND_END_ARG_INFO()
#endif

#if EV_FORK_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvLoop_fork, 0, 0, EvFork, 0)
ZEND_END_ARG_INFO()
#endif

#define arginfo_class_EvWatcher_start arginfo_class_Ev_nowUpdate

#define arginfo_class_EvWatcher_stop arginfo_class_Ev_nowUpdate

#define arginfo_class_EvWatcher_clear arginfo_class_Ev_supportedBackends

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_EvWatcher_invoke, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, revents, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_EvWatcher_feed arginfo_class_EvWatcher_invoke

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvWatcher_getLoop, 0, 0, EvLoop, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_EvWatcher_keepalive, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, value, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_EvWatcher_setCallback, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_EvIo___construct, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, fd, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, events, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_class_EvIo_createStopped arginfo_class_EvLoop_io

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_EvIo_set, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, fd, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, events, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_EvTimer___construct, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, after, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, repeat, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_class_EvTimer_createStopped arginfo_class_EvLoop_timer

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_EvTimer_set, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, after, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, repeat, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_EvTimer_again arginfo_class_Ev_nowUpdate

#if EV_PERIODIC_ENABLE
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_EvPeriodic___construct, 0, 0, 4)
	ZEND_ARG_TYPE_INFO(0, offset, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, reschedule_cb, IS_MIXED, 1)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_PERIODIC_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvPeriodic_createStopped, 0, 4, EvPeriodic, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, reschedule_cb, IS_MIXED, 1)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_PERIODIC_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_EvPeriodic_set, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, reschedule_cb, IS_MIXED, 1, "null")
ZEND_END_ARG_INFO()
#endif

#if EV_PERIODIC_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_EvPeriodic_again, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()
#endif

#if EV_PERIODIC_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_EvPeriodic_at, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()
#endif

#if EV_SIGNAL_ENABLE
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_EvSignal___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, signum, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_SIGNAL_ENABLE
#define arginfo_class_EvSignal_createStopped arginfo_class_EvLoop_signal
#endif

#if EV_SIGNAL_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_EvSignal_set, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, signum, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if EV_CHILD_ENABLE
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_EvChild___construct, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, pid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, trace, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_CHILD_ENABLE
#define arginfo_class_EvChild_createStopped arginfo_class_EvLoop_child
#endif

#if EV_CHILD_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_EvChild_set, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, pid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, trace, _IS_BOOL, 0)
ZEND_END_ARG_INFO()
#endif

#if EV_STAT_ENABLE
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_EvStat___construct, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_STAT_ENABLE
#define arginfo_class_EvStat_createStopped arginfo_class_EvLoop_stat
#endif

#if EV_STAT_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_EvStat_set, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()
#endif

#if EV_STAT_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_class_EvStat_attr, 0, 0, MAY_BE_ANY|MAY_BE_FALSE)
ZEND_END_ARG_INFO()
#endif

#if EV_STAT_ENABLE
#define arginfo_class_EvStat_prev arginfo_class_EvStat_attr
#endif

#if EV_STAT_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_EvStat_stat, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()
#endif

#if EV_IDLE_ENABLE
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_EvIdle___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_IDLE_ENABLE
#define arginfo_class_EvIdle_createStopped arginfo_class_EvLoop_idle
#endif

#if EV_CHECK_ENABLE
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_EvCheck___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_CHECK_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvCheck_createStopped, 0, 1, EvCheck, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_PREPARE_ENABLE
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_EvPrepare___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_PREPARE_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvPrepare_createStopped, 0, 1, EvPrepare, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_EMBED_ENABLE
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_EvEmbed___construct, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, other, EvLoop, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_EMBED_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvEmbed_createStopped, 0, 2, EvEmbed, 0)
	ZEND_ARG_OBJ_INFO(0, other, EvLoop, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_EMBED_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_EvEmbed_set, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, other, EvLoop, 0)
ZEND_END_ARG_INFO()
#endif

#if EV_EMBED_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_EvEmbed_sweep, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()
#endif

#if EV_FORK_ENABLE
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_EvFork___construct, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, loop, EvLoop, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif

#if EV_FORK_ENABLE
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_EvFork_createStopped, 0, 2, EvFork, 0)
	ZEND_ARG_OBJ_INFO(0, loop, EvLoop, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_MIXED, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, priority, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif


ZEND_METHOD(Ev, supportedBackends);
ZEND_METHOD(Ev, recommendedBackends);
ZEND_METHOD(Ev, embeddableBackends);
ZEND_METHOD(Ev, sleep);
ZEND_METHOD(Ev, time);
ZEND_METHOD(Ev, feedSignal);
ZEND_METHOD(Ev, feedSignalEvent);
ZEND_METHOD(Ev, run);
ZEND_METHOD(Ev, now);
ZEND_METHOD(Ev, stop);
ZEND_METHOD(Ev, iteration);
ZEND_METHOD(Ev, depth);
ZEND_METHOD(Ev, backend);
ZEND_METHOD(Ev, nowUpdate);
ZEND_METHOD(Ev, suspend);
ZEND_METHOD(Ev, resume);
ZEND_METHOD(Ev, verify);
ZEND_METHOD(EvLoop, __construct);
ZEND_METHOD(EvLoop, defaultLoop);
ZEND_METHOD(EvLoop, loopFork);
ZEND_METHOD(EvLoop, verify);
ZEND_METHOD(EvLoop, invokePending);
ZEND_METHOD(EvLoop, nowUpdate);
ZEND_METHOD(EvLoop, suspend);
ZEND_METHOD(EvLoop, resume);
ZEND_METHOD(EvLoop, backend);
ZEND_METHOD(EvLoop, now);
ZEND_METHOD(EvLoop, run);
ZEND_METHOD(EvLoop, stop);
ZEND_METHOD(EvLoop, io);
ZEND_METHOD(EvLoop, timer);
#if EV_PERIODIC_ENABLE
ZEND_METHOD(EvLoop, periodic);
#endif
#if EV_SIGNAL_ENABLE
ZEND_METHOD(EvLoop, signal);
#endif
#if EV_CHILD_ENABLE
ZEND_METHOD(EvLoop, child);
#endif
#if EV_STAT_ENABLE
ZEND_METHOD(EvLoop, stat);
#endif
#if EV_IDLE_ENABLE
ZEND_METHOD(EvLoop, idle);
#endif
#if EV_CHECK_ENABLE
ZEND_METHOD(EvLoop, check);
#endif
#if EV_PREPARE_ENABLE
ZEND_METHOD(EvLoop, prepare);
#endif
#if EV_EMBED_ENABLE
ZEND_METHOD(EvLoop, embed);
#endif
#if EV_FORK_ENABLE
ZEND_METHOD(EvLoop, fork);
#endif
ZEND_METHOD(EvWatcher, start);
ZEND_METHOD(EvWatcher, stop);
ZEND_METHOD(EvWatcher, clear);
ZEND_METHOD(EvWatcher, invoke);
ZEND_METHOD(EvWatcher, feed);
ZEND_METHOD(EvWatcher, getLoop);
ZEND_METHOD(EvWatcher, keepalive);
ZEND_METHOD(EvWatcher, setCallback);
ZEND_METHOD(EvIo, __construct);
ZEND_METHOD(EvIo, createStopped);
ZEND_METHOD(EvIo, set);
ZEND_METHOD(EvTimer, __construct);
ZEND_METHOD(EvTimer, createStopped);
ZEND_METHOD(EvTimer, set);
ZEND_METHOD(EvTimer, again);
#if EV_PERIODIC_ENABLE
ZEND_METHOD(EvPeriodic, __construct);
#endif
#if EV_PERIODIC_ENABLE
ZEND_METHOD(EvPeriodic, createStopped);
#endif
#if EV_PERIODIC_ENABLE
ZEND_METHOD(EvPeriodic, set);
#endif
#if EV_PERIODIC_ENABLE
ZEND_METHOD(EvPeriodic, again);
#endif
#if EV_PERIODIC_ENABLE
ZEND_METHOD(EvPeriodic, at);
#endif
#if EV_SIGNAL_ENABLE
ZEND_METHOD(EvSignal, __construct);
#endif
#if EV_SIGNAL_ENABLE
ZEND_METHOD(EvSignal, createStopped);
#endif
#if EV_SIGNAL_ENABLE
ZEND_METHOD(EvSignal, set);
#endif
#if EV_CHILD_ENABLE
ZEND_METHOD(EvChild, __construct);
#endif
#if EV_CHILD_ENABLE
ZEND_METHOD(EvChild, createStopped);
#endif
#if EV_CHILD_ENABLE
ZEND_METHOD(EvChild, set);
#endif
#if EV_STAT_ENABLE
ZEND_METHOD(EvStat, __construct);
#endif
#if EV_STAT_ENABLE
ZEND_METHOD(EvStat, createStopped);
#endif
#if EV_STAT_ENABLE
ZEND_METHOD(EvStat, set);
#endif
#if EV_STAT_ENABLE
ZEND_METHOD(EvStat, attr);
#endif
#if EV_STAT_ENABLE
ZEND_METHOD(EvStat, prev);
#endif
#if EV_STAT_ENABLE
ZEND_METHOD(EvStat, stat);
#endif
#if EV_IDLE_ENABLE
ZEND_METHOD(EvIdle, __construct);
#endif
#if EV_IDLE_ENABLE
ZEND_METHOD(EvIdle, createStopped);
#endif
#if EV_CHECK_ENABLE
ZEND_METHOD(EvCheck, __construct);
#endif
#if EV_CHECK_ENABLE
ZEND_METHOD(EvCheck, createStopped);
#endif
#if EV_PREPARE_ENABLE
ZEND_METHOD(EvPrepare, __construct);
#endif
#if EV_PREPARE_ENABLE
ZEND_METHOD(EvPrepare, createStopped);
#endif
#if EV_EMBED_ENABLE
ZEND_METHOD(EvEmbed, __construct);
#endif
#if EV_EMBED_ENABLE
ZEND_METHOD(EvEmbed, createStopped);
#endif
#if EV_EMBED_ENABLE
ZEND_METHOD(EvEmbed, set);
#endif
#if EV_EMBED_ENABLE
ZEND_METHOD(EvEmbed, sweep);
#endif
#if EV_FORK_ENABLE
ZEND_METHOD(EvFork, __construct);
#endif
#if EV_FORK_ENABLE
ZEND_METHOD(EvFork, createStopped);
#endif


static const zend_function_entry class_Ev_methods[] = {
	ZEND_ME(Ev, supportedBackends, arginfo_class_Ev_supportedBackends, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, recommendedBackends, arginfo_class_Ev_recommendedBackends, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, embeddableBackends, arginfo_class_Ev_embeddableBackends, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, sleep, arginfo_class_Ev_sleep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, time, arginfo_class_Ev_time, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, feedSignal, arginfo_class_Ev_feedSignal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, feedSignalEvent, arginfo_class_Ev_feedSignalEvent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, run, arginfo_class_Ev_run, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, now, arginfo_class_Ev_now, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, stop, arginfo_class_Ev_stop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, iteration, arginfo_class_Ev_iteration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, depth, arginfo_class_Ev_depth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, backend, arginfo_class_Ev_backend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, nowUpdate, arginfo_class_Ev_nowUpdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, suspend, arginfo_class_Ev_suspend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, resume, arginfo_class_Ev_resume, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(Ev, verify, arginfo_class_Ev_verify, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_FE_END
};


static const zend_function_entry class_EvLoop_methods[] = {
	ZEND_ME(EvLoop, __construct, arginfo_class_EvLoop___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(EvLoop, defaultLoop, arginfo_class_EvLoop_defaultLoop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(EvLoop, loopFork, arginfo_class_EvLoop_loopFork, ZEND_ACC_PUBLIC)
	ZEND_ME(EvLoop, verify, arginfo_class_EvLoop_verify, ZEND_ACC_PUBLIC)
	ZEND_ME(EvLoop, invokePending, arginfo_class_EvLoop_invokePending, ZEND_ACC_PUBLIC)
	ZEND_ME(EvLoop, nowUpdate, arginfo_class_EvLoop_nowUpdate, ZEND_ACC_PUBLIC)
	ZEND_ME(EvLoop, suspend, arginfo_class_EvLoop_suspend, ZEND_ACC_PUBLIC)
	ZEND_ME(EvLoop, resume, arginfo_class_EvLoop_resume, ZEND_ACC_PUBLIC)
	ZEND_ME(EvLoop, backend, arginfo_class_EvLoop_backend, ZEND_ACC_PUBLIC)
	ZEND_ME(EvLoop, now, arginfo_class_EvLoop_now, ZEND_ACC_PUBLIC)
	ZEND_ME(EvLoop, run, arginfo_class_EvLoop_run, ZEND_ACC_PUBLIC)
	ZEND_ME(EvLoop, stop, arginfo_class_EvLoop_stop, ZEND_ACC_PUBLIC)
	ZEND_ME(EvLoop, io, arginfo_class_EvLoop_io, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(EvLoop, timer, arginfo_class_EvLoop_timer, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
#if EV_PERIODIC_ENABLE
	ZEND_ME(EvLoop, periodic, arginfo_class_EvLoop_periodic, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
#endif
#if EV_SIGNAL_ENABLE
	ZEND_ME(EvLoop, signal, arginfo_class_EvLoop_signal, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
#endif
#if EV_CHILD_ENABLE
	ZEND_ME(EvLoop, child, arginfo_class_EvLoop_child, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
#endif
#if EV_STAT_ENABLE
	ZEND_ME(EvLoop, stat, arginfo_class_EvLoop_stat, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
#endif
#if EV_IDLE_ENABLE
	ZEND_ME(EvLoop, idle, arginfo_class_EvLoop_idle, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
#endif
#if EV_CHECK_ENABLE
	ZEND_ME(EvLoop, check, arginfo_class_EvLoop_check, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
#endif
#if EV_PREPARE_ENABLE
	ZEND_ME(EvLoop, prepare, arginfo_class_EvLoop_prepare, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
#endif
#if EV_EMBED_ENABLE
	ZEND_ME(EvLoop, embed, arginfo_class_EvLoop_embed, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
#endif
#if EV_FORK_ENABLE
	ZEND_ME(EvLoop, fork, arginfo_class_EvLoop_fork, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
#endif
	ZEND_FE_END
};


static const zend_function_entry class_EvWatcher_methods[] = {
	ZEND_ME(EvWatcher, start, arginfo_class_EvWatcher_start, ZEND_ACC_PUBLIC)
	ZEND_ME(EvWatcher, stop, arginfo_class_EvWatcher_stop, ZEND_ACC_PUBLIC)
	ZEND_ME(EvWatcher, clear, arginfo_class_EvWatcher_clear, ZEND_ACC_PUBLIC)
	ZEND_ME(EvWatcher, invoke, arginfo_class_EvWatcher_invoke, ZEND_ACC_PUBLIC)
	ZEND_ME(EvWatcher, feed, arginfo_class_EvWatcher_feed, ZEND_ACC_PUBLIC)
	ZEND_ME(EvWatcher, getLoop, arginfo_class_EvWatcher_getLoop, ZEND_ACC_PUBLIC)
	ZEND_ME(EvWatcher, keepalive, arginfo_class_EvWatcher_keepalive, ZEND_ACC_PUBLIC)
	ZEND_ME(EvWatcher, setCallback, arginfo_class_EvWatcher_setCallback, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_EvIo_methods[] = {
	ZEND_ME(EvIo, __construct, arginfo_class_EvIo___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(EvIo, createStopped, arginfo_class_EvIo_createStopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(EvIo, set, arginfo_class_EvIo_set, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_EvTimer_methods[] = {
	ZEND_ME(EvTimer, __construct, arginfo_class_EvTimer___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(EvTimer, createStopped, arginfo_class_EvTimer_createStopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(EvTimer, set, arginfo_class_EvTimer_set, ZEND_ACC_PUBLIC)
	ZEND_ME(EvTimer, again, arginfo_class_EvTimer_again, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_EvPeriodic_methods[] = {
#if EV_PERIODIC_ENABLE
	ZEND_ME(EvPeriodic, __construct, arginfo_class_EvPeriodic___construct, ZEND_ACC_PUBLIC)
#endif
#if EV_PERIODIC_ENABLE
	ZEND_ME(EvPeriodic, createStopped, arginfo_class_EvPeriodic_createStopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
#endif
#if EV_PERIODIC_ENABLE
	ZEND_ME(EvPeriodic, set, arginfo_class_EvPeriodic_set, ZEND_ACC_PUBLIC)
#endif
#if EV_PERIODIC_ENABLE
	ZEND_ME(EvPeriodic, again, arginfo_class_EvPeriodic_again, ZEND_ACC_PUBLIC)
#endif
#if EV_PERIODIC_ENABLE
	ZEND_ME(EvPeriodic, at, arginfo_class_EvPeriodic_at, ZEND_ACC_PUBLIC)
#endif
	ZEND_FE_END
};


static const zend_function_entry class_EvSignal_methods[] = {
#if EV_SIGNAL_ENABLE
	ZEND_ME(EvSignal, __construct, arginfo_class_EvSignal___construct, ZEND_ACC_PUBLIC)
#endif
#if EV_SIGNAL_ENABLE
	ZEND_ME(EvSignal, createStopped, arginfo_class_EvSignal_createStopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
#endif
#if EV_SIGNAL_ENABLE
	ZEND_ME(EvSignal, set, arginfo_class_EvSignal_set, ZEND_ACC_PUBLIC)
#endif
	ZEND_FE_END
};


static const zend_function_entry class_EvChild_methods[] = {
#if EV_CHILD_ENABLE
	ZEND_ME(EvChild, __construct, arginfo_class_EvChild___construct, ZEND_ACC_PUBLIC)
#endif
#if EV_CHILD_ENABLE
	ZEND_ME(EvChild, createStopped, arginfo_class_EvChild_createStopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
#endif
#if EV_CHILD_ENABLE
	ZEND_ME(EvChild, set, arginfo_class_EvChild_set, ZEND_ACC_PUBLIC)
#endif
	ZEND_FE_END
};


static const zend_function_entry class_EvStat_methods[] = {
#if EV_STAT_ENABLE
	ZEND_ME(EvStat, __construct, arginfo_class_EvStat___construct, ZEND_ACC_PUBLIC)
#endif
#if EV_STAT_ENABLE
	ZEND_ME(EvStat, createStopped, arginfo_class_EvStat_createStopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
#endif
#if EV_STAT_ENABLE
	ZEND_ME(EvStat, set, arginfo_class_EvStat_set, ZEND_ACC_PUBLIC)
#endif
#if EV_STAT_ENABLE
	ZEND_ME(EvStat, attr, arginfo_class_EvStat_attr, ZEND_ACC_PUBLIC)
#endif
#if EV_STAT_ENABLE
	ZEND_ME(EvStat, prev, arginfo_class_EvStat_prev, ZEND_ACC_PUBLIC)
#endif
#if EV_STAT_ENABLE
	ZEND_ME(EvStat, stat, arginfo_class_EvStat_stat, ZEND_ACC_PUBLIC)
#endif
	ZEND_FE_END
};


static const zend_function_entry class_EvIdle_methods[] = {
#if EV_IDLE_ENABLE
	ZEND_ME(EvIdle, __construct, arginfo_class_EvIdle___construct, ZEND_ACC_PUBLIC)
#endif
#if EV_IDLE_ENABLE
	ZEND_ME(EvIdle, createStopped, arginfo_class_EvIdle_createStopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
#endif
	ZEND_FE_END
};


static const zend_function_entry class_EvCheck_methods[] = {
#if EV_CHECK_ENABLE
	ZEND_ME(EvCheck, __construct, arginfo_class_EvCheck___construct, ZEND_ACC_PUBLIC)
#endif
#if EV_CHECK_ENABLE
	ZEND_ME(EvCheck, createStopped, arginfo_class_EvCheck_createStopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
#endif
	ZEND_FE_END
};


static const zend_function_entry class_EvPrepare_methods[] = {
#if EV_PREPARE_ENABLE
	ZEND_ME(EvPrepare, __construct, arginfo_class_EvPrepare___construct, ZEND_ACC_PUBLIC)
#endif
#if EV_PREPARE_ENABLE
	ZEND_ME(EvPrepare, createStopped, arginfo_class_EvPrepare_createStopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
#endif
	ZEND_FE_END
};


static const zend_function_entry class_EvEmbed_methods[] = {
#if EV_EMBED_ENABLE
	ZEND_ME(EvEmbed, __construct, arginfo_class_EvEmbed___construct, ZEND_ACC_PUBLIC)
#endif
#if EV_EMBED_ENABLE
	ZEND_ME(EvEmbed, createStopped, arginfo_class_EvEmbed_createStopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
#endif
#if EV_EMBED_ENABLE
	ZEND_ME(EvEmbed, set, arginfo_class_EvEmbed_set, ZEND_ACC_PUBLIC)
#endif
#if EV_EMBED_ENABLE
	ZEND_ME(EvEmbed, sweep, arginfo_class_EvEmbed_sweep, ZEND_ACC_PUBLIC)
#endif
	ZEND_FE_END
};


static const zend_function_entry class_EvFork_methods[] = {
#if EV_FORK_ENABLE
	ZEND_ME(EvFork, __construct, arginfo_class_EvFork___construct, ZEND_ACC_PUBLIC)
#endif
#if EV_FORK_ENABLE
	ZEND_ME(EvFork, createStopped, arginfo_class_EvFork_createStopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
#endif
	ZEND_FE_END
};
