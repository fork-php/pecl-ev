--TEST--
Check for exit in loop watcher
--SKIPIF--
<?php if (PHP_VERSION_ID < 80000) print 'skip this test is for PHP versions 8 or greater'; ?>
--FILE--
<?php
$timer = new EvTimer(1, 1, function () {
    fprintf(STDERR, 'Exiting from watcher');
    exit;
});
Ev::run();
?>
--EXPECT--
Exiting from watcher
