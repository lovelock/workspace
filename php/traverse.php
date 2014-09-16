<?php
function arr_traverse($arr)
{
    if (!is_array($arr)) {
        return false;
    }
    $temp = array();
    foreach ($arr as $key=>$val) {
        if (is_array($val)) {
            arr_traverse($val);
        } else {
            $temp[] = $val;
            // echo $val. '<br/>';
        }
    }
    print_r($temp);
    // return $temp;
}

$arr1 = array(
    1 => array(
        11, 12, 13,
    14 => array(141, 142)
    ),
    2, 3, 4, 5);

$arr2 = array(
    1 => array(
        11, 12, 13,
    14 => array(141, 142)
    ),
    2, 3, 4, 5);
/*
 *print_r($arr1);
 *print_r($arr2);
 */

arr_traverse($arr1);
// $s = arr_traverse($arr1);
// print_r($s);
