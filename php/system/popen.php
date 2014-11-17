<?php
error_reporting(E_ALL);
$handle = popen('/path/to/executable 2>&1', 'r');
echo "'$hendle'; " . gettype($handle) . "\n";
$read = fread($handle, 2096);
echo $read;
pclose($handle);
?>
