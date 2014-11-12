<?php
$file = fopen('yunyingscore_beijing.csv', 'r');
while ($data = fgetcsv($file)) {
    $scores[] = $data;
}

print_r($scores);
$sql = "INSERT INTO lodgeunityunyingscore (luid, yunyingscore, cityid) VALUES (?, ?, 12)";

foreach ($scores as $score) {
    COMpping::getObject("ExStorageHandler", null, "m")->execSql($sql, $score);
}
