<?php
#$originalString = 'DiscreteScoreCalculatorPromotionPrice';
/*
 *$originalString = 'CurveScoreCalcualtorPhotos';
 *$finalString = substr($originalString, 20) . 'Score';
 *echo $finalString;
 *echo "\n";
 */

$factor = "IntroScore";
$shortString = substr("CurveScoreCalculator" . $factor, 0, -5);
echo $shortString;
echo "\n";
