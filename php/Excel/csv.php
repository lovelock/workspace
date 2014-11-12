<?php
$file = fopen('score.csv', 'r');
while ($data = fgetcsv($file)) {
    $scores[] = $data;
}

print_r($scores);
/*
 * foreach ($scores as $score) {
 *     echo $score[0];
 *     echo "\n";
 *     echo $score[1];
 *     echo "\n";
 * }
 */
