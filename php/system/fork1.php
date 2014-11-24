<?php
$pid = pcntl_fork();
if ($pid == -1) {
    die('could not fork');
} else if ($pid) {
    pcntl_wait($status);
} else {
    var_dump('child process');
}
