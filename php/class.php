<?php
class test
{
    public function getClassName()
    {
        echo __class__;
    }
}

class childTest extends test
{
    /*
     *public function getClassName()
     *{
     *    echo __class__;
     *}
     */
}


$t = new test();
$t->getClassName();

$ct = new childTest();
$ct->getClassName();
