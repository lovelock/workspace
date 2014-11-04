<?php
require_once 'Excel/reader.php';
$data->read('0925.xlsx');
@ $db = mysql_connect('127.0.0.1:4306', 'root', '9e77e62048477a78cab0bfcfce455548') or die('could not connect');
mysql_query("set names 'gbk'");
mysql_select_db('wangqingchun');
error_reporting(E_ALL ^ E_NOTICE);
for ($i = 1; $i <= $data->sheets[0]['numRows']; $i++) {
    print_r($i);
    echo "\n";
}

