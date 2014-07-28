<?php
class product
{
    protected $__type = '';
    protected $__size = '';
    protected $__color = '';

    public function setType($type)
    {
        $this->__type = $type;
    }

    public function setSize($size)
    {
        $this->__size = $size;
    }

    public function setColor($color)
    {
        $this->__color = $color;
    }
}

$productConfigs = array(
    'type' => 'shirt',
    'size' => 'XL',
    'color' => 'red'
);

$product = new product();
$product->setType($productConfigs['type']);
$product->setSize($productConfigs['size']);
$product->setColor($productConfigs['color']);
?>
