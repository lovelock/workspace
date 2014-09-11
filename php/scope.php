<?php
class Test
{
    public function function1()
    {
        $var1 = 1;
        return $var1;
    }

    public function function2()
    {
        $var2 = $this->function1();

        print_r($var2);
    }
}

$testCase = new Test();
$testCase->function2();
