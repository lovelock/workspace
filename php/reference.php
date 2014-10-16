<?php
/*
 *$a = $b = 0;
 *$a = 2;
 *echo $b;
 */

class Test
{
    public function __construct($entity)
    {

    }

    public function printEntity($entity)
    {
        echo $entity;
    }
}

$entity = "a";
$test = new Test($entity);
$test->printEntity($entity);
