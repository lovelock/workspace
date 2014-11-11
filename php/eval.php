<?php
$string = 'beautiful';
$time = 'winter';

$str = 'This is a $string $time morning';
echo $str . "\n";

eval("\$str = \"$str\";");
echo $str . "\n";
