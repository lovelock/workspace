<?php
$a = array(
    'b' => 4,
    'c' => 2,
    'd' => 5,
    'e' => 7,
    'f' => 9
);

print_r($a);

array_multisort($a, SORT_DESC);
print_r($a);

$b = array_values($a);
print_r($b);

/*
 *for ($i = $max - 1; $i >= 0; $i --)
 *{
 *    echo $i . ': ' . $a[$i];
 *}
 */
