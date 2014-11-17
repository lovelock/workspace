<?php
function test($ids)
{
    if (empty($ids)) {
        $ids = array('a', 'b', 'c');
    }

    var_dump($ids);
}

$ids = array(11);
test($ids);
