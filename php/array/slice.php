<?php
/*
 * $array = array('a', 'b', 'c');
 * $new = array_slice($array, 1,3);
 * var_dump($new);
 */
$array = array_fill(1,100,'a');
$a = 10;
$b = ceil(count($array) / $a);
for ($i = 0; $i < $b; $i++) {
    $new = array_slice($array, $i * $a, $a);
    var_dump($new);
}
