<?php
$array = [
    [1, 2],
    [3, 4]
];

// 数组的数组中的每个数组的个数需要一样
foreach ($array as list($a, $b)) {
    echo "A: $a; B: $b\n";
}
