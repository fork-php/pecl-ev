--TEST--
Check for bug #43 (Handling uncaught exception in the callback)
--SKIPIF--
<?php if (PHP_VERSION_ID >= 70000) print 'skip this test is for PHP versions 5 or less'; ?>
--FILE--
<?php
try {
    $timer = new EvTimer(1, 1, function () {
        throw new RuntimeException("Test");
    });
    Ev::run();
} catch (RuntimeException $e) {
    fprintf(STDERR, "Caught %s: %s\n", get_class($e), $e->getMessage());
}
?>
--EXPECTF--
Warning: Ev::run(): An error occurred while invoking the callback in %s on line %d

Warning: Ev::run(): Stopping event loop because of uncaught exception in the callback in %s on line %d
Caught RuntimeException: Test
