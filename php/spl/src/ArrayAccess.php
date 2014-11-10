<?php
/*
 * @offsetExists($offset)
 * @offsetGet($offset)
 * @offsetSet($offset, $value)
 * @offsetUnset($offset)
 */

class Article implements ArrayAccess
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
}

$article = new Article('SPL Rocks', 'Joe Bloggs', 'PHP');

echo 'Initial State: <div>';
print_r($article);
echo '</div>';

$article['title'] = 'SPL _really_ rocks';

$article['not found'] = 1;

unset($article['author']);

echo 'Final State: <div>';
print_r($article);
echo '</div>';
