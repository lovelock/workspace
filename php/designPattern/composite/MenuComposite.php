<?php

class MenuComposite implements MenuComponent
{
    private $_items = array();
    private $_name = null;
    private $_align = '';

    public function __construct($name)
    {
        $this->_name = $name;
    }

    public function add($component)
    {
        $this->_items[$component->getName()] = $component;
    }

    public function remove($component)
    {
        $key = array_search($component, $this->_items);
        if ($key !== false)
            unset($this->_items[$key]);
    }

    public function getItems()
    {
        return $this->_items;
    }

    public function displayOperation()
    {
        static $align = '|';
        if ($this->getItems()) {
            $align .= '__';
        } else {
            $align .= '';
        }

        echo $this->_name, "<br />";
        foreach ($this->_items as $name=>$item) {
            echo $align;
            $item->displayOperation();
        }
    }

    public function getName()
    {
        return $this->_name;
    }
}
