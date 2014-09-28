<?php
class ABCDE
{
    protected $a = __class__;

    public function printa()
    {
        return strtolower($this->a);
    }
}

$b = new ABCDE();
$c = $b->printa();
print_r($c);
