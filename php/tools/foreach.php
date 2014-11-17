<?php
/*
 * $arr['laruence'] = 'huixinchen';
 * $arr['yahoo'] = 2007;
 * $arr['baidu'] = 2008;
 * foreach ($arr as $key => $value) {
 *     var_dump($key . ": " . $value);
 * }
 */

$arr[2] = 'huixinchen';
$arr[1] = 2007;
$arr[0] = 2008;

foreach ($arr as $key => $value) {
    var_dump($value);
}
