<?php
/** @generate-function-entries */

final class Ev {
    final public static function supportedBackends() : int {}
    final public static function recommendedBackends() : int {}
    final public static function embeddableBackends() : int {}
    final public static function sleep(float $seconds) : void {}
    final public static function time() : float {}
    final public static function feedSignal(int $signum) : void {}
    final public static function feedSignalEvent(int $signum) : void {}
    final public static function run(int $flags = 0) : void {}
    final public static function now() : float {}
    final public static function stop(int $how = 0) : void {}
    final public static function iteration() : int {}
    final public static function depth() : int {}
    final public static function backend() : int {}
    final public static function nowUpdate() : void {}
    final public static function suspend() : void {}
    final public static function resume() : void {}
    final public static function verify() : void {}
}

final class EvLoop {
    public function __construct(int $flags = Ev::FLAG_AUTO, ?mixed $data = null, float $io_interval = 0., float $timeout_interval = 0.) {}
    public static function defaultLoop(int $flags = Ev::FLAG_AUTO, ?mixed $data = null, float $io_interval = 0., float $timeout_interval = 0.): EvLoop {}
    public function loopFork(): void {}
    public function verify(): void {}
    public function invokePending(): void {}
    public function nowUpdate(): void {}
    public function suspend(): void {}
    public function resume(): void {}
    public function backend(): int {}
    public function now(): float {}
    public function run(int $flags = 0): void {}
    public function stop(int $how = 0): void {}
    final public function io(mixed $fd, int $events, mixed $callback, ?mixed $data = null, int $priority = 0): EvIo {}
    final public function timer(float $after, float $repeat, mixed $callback, ?mixed $data = null, int $priority = 0): EvTimer {}
#if EV_PERIODIC_ENABLE
    final public function periodic(float $offset, float $interval, mixed $reschedule_cb, mixed $callback, ?mixed $data = null, int $priority = 0): EvPeriodic {}
#endif
#if EV_SIGNAL_ENABLE
    final public function signal(int $signum, mixed $callback, ?mixed $data = null, int $priority = 0): EvSignal {}
#endif
#if EV_CHILD_ENABLE
    final public function child(int $pid, bool $trace, mixed $callback, ?mixed $data = null, int $priority = 0): EvChild {}
#endif
#if EV_STAT_ENABLE
    final public function stat(string $path, float $interval, mixed $callback, ?mixed $data = null, int $priority = 0): EvStat {}
#endif
#if EV_IDLE_ENABLE
    final public function idle(mixed $callback, ?mixed $data = null, int $priority = 0): EvIdle {}
#endif
#if EV_CHECK_ENABLE
    final public function check(): EvCheck {}
#endif
#if EV_PREPARE_ENABLE
    final public function prepare(): EvPrepare {}
#endif
#if EV_EMBED_ENABLE
    final public function embed(): EvEmbed {}
#endif
#if EV_FORK_ENABLE
    final public function fork(): EvFork {}
#endif
}

abstract class EvWatcher {
    public function start() : void {}
    public function stop() : void {}
    public function clear() : int {}
    public function invoke(int $revents) : void {}
    public function feed(int $revents) : void {}
    public function getLoop() : ?EvLoop {}
    public function keepalive(bool $value = true) : bool {}
    public function setCallback(mixed $callback) : void {}
}

class EvIo extends EvWatcher {
    public function __construct(mixed $fd, int $events, mixed $callback, ?mixed $data = null, int $priority = 0) {}
    final public static function createStopped(mixed $fd, int $events, mixed $callback, ?mixed $data = null, int $priority = 0): EvIo {}
    public function set(mixed $fd, int $events): void {}
}

class EvTimer extends EvWatcher {
    public function __construct(float $after, float $repeat, mixed $callback, ?mixed $data = null, int $priority = 0) {}
    final public static function createStopped(float $after, float $repeat, mixed $callback, ?mixed $data = null, int $priority = 0): EvTimer {}
    public function set(float $after, float $repeat): void {}
    public function again(): void {}

}

#if EV_PERIODIC_ENABLE
class EvPeriodic extends EvWatcher {
    public function __construct(float $offset, float $interval, ?mixed $reschedule_cb, mixed $callback, ?mixed $data = null, int $priority = 0) {}
    final public static function createStopped(float $offset, float $interval, ?mixed $reschedule_cb, mixed $callback, ?mixed $data = null, int $priority = 0): EvPeriodic {}
    public function set(float $offset, float $interval, ?mixed $reschedule_cb = null): void {}
    public function again(): void {}
    public function at(): float {}
}
#endif

#if EV_SIGNAL_ENABLE
class EvSignal extends EvWatcher {
    public function __construct(int $signum, mixed $callback, ?mixed $data = null, int $priority = 0) {}
    final public static function createStopped(int $signum, mixed $callback, ?mixed $data = null, int $priority = 0): EvSignal {}
    public function set(int $signum): void {}
}
#endif

#if EV_CHILD_ENABLE
class EvChild extends EvWatcher {
    public function __construct(int $pid, bool $trace, mixed $callback, ?mixed $data = null, int $priority = 0) {}
    final public static function createStopped(int $pid, bool $trace, mixed $callback, ?mixed $data = null, int $priority = 0): EvChild {}
    public function set(int $pid, bool $trace): void {}
}
#endif

#if EV_STAT_ENABLE
class EvStat extends EvWatcher {
    public function __construct(string $path, float $interval, mixed $callback, ?mixed $data = null, int $priority = 0) {}
    final public static function createStopped(string $path, float $interval, mixed $callback, ?mixed $data = null, int $priority = 0): EvStat {}
    public function set(string $path, float $interval): void {}
    public function attr() : mixed|false {}
    public function prev() : mixed|false {}
    public function stat() : bool {}
}
#endif

#if EV_IDLE_ENABLE
class EvIdle extends EvWatcher {
    public function __construct(mixed $callback, ?mixed $data = null, int $priority = 0) {}
    final public static function createStopped(mixed $callback, ?mixed $data = null, int $priority = 0): EvIdle {}
}
#endif

#if EV_CHECK_ENABLE
class EvCheck extends EvWatcher {
    public function __construct(mixed $callback, ?mixed $data = null, int $priority = 0) {}
    final public static function createStopped(mixed $callback, ?mixed $data = null, int $priority = 0): EvCheck {}
}
#endif

#if EV_PREPARE_ENABLE
class EvPrepare extends EvWatcher {
    public function __construct(mixed $callback, ?mixed $data = null, int $priority = 0) {}
    final public static function createStopped(mixed $callback, ?mixed $data = null, int $priority = 0): EvPrepare {}
}
#endif

#if EV_EMBED_ENABLE
class EvEmbed extends EvWatcher {
    public function __construct(EvLoop $other, mixed $callback, ?mixed $data = null, int $priority = 0) {}
    final public static function createStopped(EvLoop $other, mixed $callback, ?mixed $data = null, int $priority = 0): EvEmbed {}
    public function set(EvLoop $other): void {}
    public function sweep(): void {}
}
#endif

#if EV_FORK_ENABLE
class EvFork extends EvWatcher {
    public function __construct(EvLoop $loop, mixed $callback, ?mixed $data = null, int $priority = 0) {}
    final public static function createStopped(EvLoop $loop, mixed $callback, ?mixed $data = null, int $priority = 0): EvFork {}
}
#endif
