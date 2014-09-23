<?php
class Printer
{
    public function printSth()
    {
        echo "I can print\n";
    }
}

class TextShop
{
    private $printer;

    public function __construct(Printer $printer)
    {
        $this->printer = $printer;
    }

    public function sellPaper()
    {
        echo "Give you some paper\n";
    }

    public function __call($method, $args)
    {
        if (method_exists($this->printer, $method)) {
            $this->printer->$method($args);
        }
    }
}

class PhotoShop
{
    private $printer;

    public function __construct(Printer $printer)
    {
        $this->printer = $printer;
    }

    public function takePhotos()
    {
        echo "Take photos for you \n";
    }

    public function __call($method, $args)
    {
        if (method_exists($this->printer, $method)) {
            $this->printer->$method($args);
        }
    }
}

$printer = new Printer();
$textShop = new TextShop($printer);
$photoShop = new PhotoShop($printer);

$textShop->printSth();
$photoShop->printSth();
