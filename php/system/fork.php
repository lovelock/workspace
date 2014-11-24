<?php
if (substr(php_sapi_name(), 0, 3) !== 'cli') {
    die('This Program can only be run in CLI mode');
}

set_time_limit(0);

$pid = posix_getpid();
$user = posix_getlogin();

echo <<<EOD
USAGE: [command | expression]
input php code to execute by fork a new process
input quit to exit

        Shell Executor version 1.0.0 by laruence
EOD;

while (TRUE) {
    $prompt = "\n{$user}$ ";
    $input = readline($prompt);

    readline_add_history($input);
    if ($input == 'quit') {
        break;
    }
    process_execute($input . ";");
}

exit(0);

function process_execute($input) {
    $pid = pcntl_fork();
    if ($pid == 0) {
        $pid = posix_getpid();
        echo "* Process {$pid} was created, and Executed:\n\n";
        eval($input);
        exit;
    } else {
        $pid = pcntl_wait($status, WUNTRACED);
        if (pcntl_wifexited($status)) {
            echo "\n\n* Sub process: {$pid} exited with {$status}";
        }
    }
}
?>
