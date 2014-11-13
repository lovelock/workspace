<?php
$a = array(1, 2);
foreach ($a as &$v) {
    $v = 2 * $v;
}
print_r($a);
