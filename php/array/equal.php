<?php
$a = 'good';
$b = 'good';
$c = 'good';
$d = 'good';
$e = 'bad';

$test = array($a, $b, $c, $d, $e);
$test1 = array('good', 'good', 'good', 'good', 'bad');
if ($test == $test1) {
    echo "equals";
}
