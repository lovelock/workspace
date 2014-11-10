<?php
class ArrayReload implements Iterator
{
    private $array = array();

    private $valid = FLASE;


    function __construct ($array)
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

$colors = new ArrayReload(array('red', 'green', 'blue'));

/*
 * foreach ($colors as $color) {
 *     echo $color . "\n";
 * }
 */

/*
 * foreach ($colors as $key=>$color) {
 *     echo "$key: $color\n";
 * }
 */

$colors->rewind();
while ($colors->valid()) {
    echo $colors->key() . ": " . $colors->current() . "\n";
    $colors->next();
}
