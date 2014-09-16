<?php
$startDate = date('Y-m-d');

echo $startDate;
echo "\n";
$endDate = date('Y-m-d', strtotime('+20 day', strtotime($startDate)));
echo $endDate;
echo "\n";
$t = strtotime('+20 day');

echo $t;
