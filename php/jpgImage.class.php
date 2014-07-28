<?php
include_once 'image.class.php';
include_once 'baseImage.class.php';

class jpgImage extends baseImage implements image
{
    public function getImage()
    {
        echo "创建一个jpg类型的图片";
    }
}
?>
