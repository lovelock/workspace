<?php
/*
 *$a = rand(20, 430);
 *print_r($a);
 */
$a = microtime();

function createRandID($m)
{
    $arr = range(1, $m);
    shuffle($arr);

    for($i = 0; $i<=10;$i++) {
        $n[] = $arr[$i];
    }

    return implode($n, ',');
}

echo createRandID(900000);
echo chr(10);
echo microtime() - $a;
