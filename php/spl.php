<?php
/**
 *  An iterator for native PHP arrays
 */
class ArrayReloaded implements Iterator {
    /**
     *  A native php array to iterate over
     */
    private $array = array();
    /**
     *  A switch to keep track of the end of the array
     */
    private $valid = FALSE;
    /**
     *  constructor
     */
    function __construct($array)
    {
        $this->array = $array;
    }

    function rewind()
    {
        $this->valid = (FALSE !== reset($this->array));
    }

    function current()
    {
        return current($this->array);
    }

    function key()
    {
        return key($this->array);
    }

    function next()
    {
        $this->valid = (FALSE !== next($this->array));
    }

    function valid()
    {
        return $this->valid;
    }
}


$colors = new ArrayReloaded(array('red', 'green', 'blue'));

foreach($colors as $color) {
    echo $color."<br>";
}
