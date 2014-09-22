<?php
class test{
    var $b = 1;
    function in_self()
    {
        $a = new test();
        return $a->b;
    }
}

$t = new test();
$s = $t->in_self();
print_r($s);
