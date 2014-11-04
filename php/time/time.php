<?php
$a = strtotime('2014-10-10') / 3600;

print_r($a);
echo "\n";
$b = time() / 3600;
print_r(ceil($b));
echo "\n";

$c = ceil($b) - $a;
echo $c;
echo "\n";
