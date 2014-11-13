<?php
$arr = array(1, 2, 3, 4, 54);
echo current($arr) . "\n";
next($arr);
next($arr);
echo current($arr) . "\n";
reset($arr);
echo current($arr) . "\n";
