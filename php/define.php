<?php
define($DB_USER, 'user');
define($DB_PASS, 'pass');
define($DB_HOST, 'host');
define($DB_DATABASE, 'database');

$user = new userDAO();
$userDetailsArray = $user->fetch(1);

$updates = array(
    'id' => 1,
    'firstName' => 'aaron'
);
$user->update($updates);

$allAarons = $user->getUserByFirstName('aaron');
?>
