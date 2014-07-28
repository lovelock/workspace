<?php
class productBuilder
{
    protected $__product = NULL;
    protected $__configs = array();

    public function __construct($configs)
    {
        $this->__product = new product();
        $this->__xml = $configs;
    }

    public function build()
    {
        $this->__product->setType($configs['type']);
        $this->__product->setSize($configs['size']);
        $this->__product->setColor($configs['color']);
    }

    public function getProduct()
    {
        return $this->__product;
    }
}
?>
