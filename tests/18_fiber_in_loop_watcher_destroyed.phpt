--TEST--
Check for fiber destroyed within loop watcher
--SKIPIF--
<?php if (PHP_VERSION_ID < 80100) print 'skip this test is for PHP versions 8.1 or greater'; ?>
--FILE--
<?php
$fiber = new Fiber(function (): void {
    $timer = new EvTimer(1, 1, function () {
        fprintf(STDERR, 'Suspending fiber within watcher');
        Fiber::suspend();
    });
    Ev::run();
});
$fiber->start();
?>
--EXPECT--
Suspending fiber within watcher
