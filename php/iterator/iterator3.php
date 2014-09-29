<?php
class myIterator implements Iterator
{
    private $_array = array();

    public function __construct(array $array)
    {
        $this->_array = $array;
    }

    public function rewind()
    {
        reset($this->_array);
    }

    public function current()
    {
        return current($this->_array);
    }

    public function next()
    {
        return next($this->_array);
    }

    public function key()
    {
        return key($this->_array);
    }

    public function valid()
    {
        return $this->key() !== null;
    }
}

$it = new myIterator(array('foo_1' => 'bar_1', 'foo_2' => 'bar_2'));
foreach($it as $key => $value) {
    var_dump($key, $value);
}

$it->rewind();

while($it->valid())
{
    var_dump($it->key(), $it->current());
    $it->next();
}
