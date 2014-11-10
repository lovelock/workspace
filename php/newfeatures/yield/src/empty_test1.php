<?php
function foo()
{
    return false;
}

if (empty(foo())) {
    echo 11;
} else {
    echo 12;
}
