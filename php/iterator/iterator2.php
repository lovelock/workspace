<?php
//fibonacci
class FibonacciIterator implements Iterator
{
    private $previous = 1;
    private $current = 0;
    private $key = 0;

    public function current()
    {
        return $this->current;
    }

    public function key()
    {
        return $this->key;
    }

    public function next()
    {
        $newprevious = $this->current;
        $this->current += $this->previous;
        $this->previous = $newprevious;
        $this->key++;
    }

    public function rewind()
    {
        $this->previous = 1;
        $this->current = 0;
        $this->key = 0;
    }

    public function valid()
    {
        return true;
    }
}

$seq = new FibonacciIterator();
$i = 0;
foreach ($seq as $f) {
    echo "$f\n";
    if ($i++ === 10) break;
}
