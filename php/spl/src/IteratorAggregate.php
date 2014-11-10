<?php
/*
 * @offsetExists($offset)
 * @offsetGet($offset)
 * @offsetSet($offset, $value)
 * @offsetUnset($offset)
 * @getIterator
 */

class Article implements ArrayAccess, IteratorAggregate
{
    public $title;
    public $author;
    public $category;

    function __construct($title, $author, $category)
    {
        $this->title    = $title;
        $this->author   = $author;
        $this->category = $category;
    }

    function offsetSet($key, $value)
    {
        if (array_key_exists($key, get_object_vars($this))) {
            $this->{$key} = $value;
        }
    }

    function offsetGet($key)
    {
        if (array_key_exists($key, get_object_vars($this))) {
            return $this->{$key};
        }
    }

    function offsetUnset($key)
    {
        if (array_key_exists($key, get_object_vars($this))) {
            unset($this->{$key});
        }
    }

    function offsetExists($offset)
    {
        return array_key_exists($offset, get_object_vars($this));
    }

    function getIterator()
    {
        return new ArrayIterator($this);
    }
}

$article = new Article('SPL Rocks', 'Joe Bloggs', 'PHP');

echo 'Looping with foreach: <div>';
foreach ($article as $field=>$value) {
    echo "$field: $value\n";
}

echo '</div>';

echo "Object has " . sizeof($article->getIterator()). " elements";
