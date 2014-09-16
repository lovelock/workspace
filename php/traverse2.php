<?php
function flatArray($arr)
{
    static $tmp = array();

    $i = count($arr);
    for ($i; $i >= 0; $i--) {
    // for ($i = 0; $i < count($arr); $i++) {
        echo $i . "\n";
        if (is_array($arr[$i])) {
            flatArray($arr[$i]);
        } else {
            $tmp[] = $arr[$i];
        }
    }
    return $tmp;
}

$arr1 = array(
    1 => array(
        11, 12, 13,
        14 => array(141, 142)
    ),
    2, 3, 4, 5);
// print_r(count($arr1));

print_r($arr1);
$s = flatArray($arr1);
print_r($s);
// print_r(count($arr1));
