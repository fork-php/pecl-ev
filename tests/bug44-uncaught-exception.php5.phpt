--TEST--
Checking for bug #44: segfault if the watcher is destroyed in its callback and an exception is thrown
--SKIPIF--
<?php if (PHP_VERSION_ID >= 70000) print 'skip this test is for PHP versions 5 or less'; ?>
--FILE--
<?php

$ev = new \EvLoop();
$exception = new \Exception('test');

$t0 = $ev->timer(0.1, 0.1, function () use ($exception, &$t0) {
    $t0->stop();

    throw $exception;
});

try {
    $ev->run(\Ev::RUN_ONCE);
} catch (\Exception $e) {
    printf("Caught exception %s: %s\n", get_class($e), $e->getMessage());
    echo "Same exception: ", var_export($exception === $e), PHP_EOL;
}
?>
--EXPECTF--
Warning: EvLoop::run(): An error occurred while invoking the callback in %s on line %d

Warning: EvLoop::run(): Stopping event loop because of uncaught exception in the callback in %s on line %d
Caught exception Exception: test
Same exception: true
