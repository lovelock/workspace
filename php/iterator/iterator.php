<?php
class myIterator implements Iterator
{
    private $position = 0;
    private $array = array(
        "firstElement",
        "secondElement",
        "thirdElement"
    );

    function __construct()
    {
        $this->postion = 0;
    }

    function rewind()
    {
        var_dump(__METHOD__);
        $this->postion = 0;
    }

    function current()
    {
        var_dump(__METHOD__);
        return $this->array[$this->postion];
    }

    function key()
    {
        var_dump(__METHOD__);
        return $this->postion;
    }

    function next()
    {
        var_dump(__METHOD__);
        ++$this->postion;
    }

    function valid()
    {
        var_dump(__METHOD__);
        return isset($this->array[$this->postion]);
    }
}

$it = new myIterator;

foreach($it as $key => $value)
{
    var_dump($key, $value);
    echo "\n";
}
