<?php
function test($ids=null)
{
    if (empty($ids)) {
        $ids = array('a', 'b', 'c');
    }

    var_dump($ids);
}

$ids = array(11);
test();
