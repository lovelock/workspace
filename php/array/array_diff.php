<?php
/*
 *$a = array(1, 2, 3);
 *$b = array(2, 3);
 *$c = array_diff($a, $b);
 */

$a = array(
    'a' => 1,
    'b' => 2,
    'c' => 3
);

$b = array(1, 2, 3);

if (array_diff($a, $b) || array_diff($b, $a)) {
    echo 1;
    echo "\n";
} else {
    echo 2;
    echo "\n";
}

/*
 *echo $c;
 *echo "\n";
 */
