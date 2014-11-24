<?php
ini_set('display_errors','On');
error_reporting(0777);

/**
 * circle($x, $y, $x + $r, $y);
 * @$x, $y center of the circle
 * @$r radius of the circle
 */
$tempfile = 'liufabin.jpg';
$outfile = "blah.png";

$imagick = new Imagick();
$imagick->readImage($tempfile);
$height = $imagick->getImageHeight();
$width = $imagick->getImageWidth();

var_dump($height);
var_dump($width);

$circle = new Imagick();
$circle->newImage($height, $width, 'none');
$circle->setimageformat('png');
$circle->setimagematte(true);

$draw = new ImagickDraw();
$draw->setfillcolor('#ffffff');
$draw->circle($height / 2, $height /2, $height / 2, $height);
$circle->drawimage($draw);
$circle->writeImage($outfile);

$imagick->setImageFormat("png");
$imagick->setimageMatte(true);
$imagick->cropimage($height,$height, 0 , 0);
$imagick->compositeimage($circle, Imagick::COMPOSITE_DSTIN, 0,0);
$imagick->writeImage($outfile);
$imagick->destroy();
?>

<img src="blah.png">
