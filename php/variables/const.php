<?php

# a child class can inherit its father's constants
class A
{
    const AAAA = 5;
}

class B extends A
{
    public function print_const_of_father()
    {
        var_dump(self::AAAA);
    }
}

$b = new B;
$b->print_const_of_father();

