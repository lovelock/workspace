<?php

class ItemLeaf extends MenuComponent
{
    private $_name = null;
    private $_url = null;

    public function __construct($name, $url)
    {
        $this->_name = $name;
        $this->_url = $url;
    }

    public function displayOperation()
    {
        echo '<a href="', $this->_url, '">', $this->_name, '</a><br/>';
    }

    public function getName()
    {
        return $this->_name;
    }
}
