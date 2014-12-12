<?php

abstract class MenuComponent
{
    public function add($component);
    public function remove($component);
    public function getName();
    public function getUrl();
    public function displayOperation();
}
