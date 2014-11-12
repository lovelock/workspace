<?php
function get_memory() {
        $size = memory_get_usage();
        $unit=array('B','KB','MB','GB','TB','PB');
        return @round($size/pow(1024,($i=floor(log($size,1024)))),2).' '.$unit[$i];
}
echo get_memory();
echo "\n";
