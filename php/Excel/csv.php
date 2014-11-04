<?php
$file = fopen('score.csv', 'r');
while ($data = fgetcsv($file)) {
    $scores[] = $data;
}

foreach ($scores as $score) {
    echo $score[0];
    echo "\n";
    echo $score[1];
    echo "\n";
}
