<?php
ini_set('memory_limit', '128M');
# code from laruence's blog
# 隐式的内存分配点:
# 1. 为变量名分配内存，存入符号表
# 2. 为变量值分配内存
#
# Hashtable在定义的时候不可能一次性分配足够的内存来保存未知个数的元素，所以PHP在初始化的时候
# 只是分配一部分内存给Hashtable，当不够用的时候再RESIZE扩容。
# 当unset时，只是释放了变量占用的内存，但符号表没有缩小，所以这些内存时呗符号表本身占用了。
/*
 * var_dump(memory_get_usage());
 * $a = 'frostwong';
 * var_dump(memory_get_usage());
 * unset($a);
 * var_dump(memory_get_usage());
 */

/*
 * var_dump(memory_get_usage(TRUE));
 * $a = 'frostwong';
 * var_dump(memory_get_usage(TRUE));
 * unset($a);
 * var_dump(memory_get_usage(TRUE));
 */

/*
 * var_dump("I am frost");
 * var_dump(memory_get_usage());
 * $a = 'frostwong';
 * var_dump(memory_get_usage());
 * unset($a);
 * var_dump(memory_get_usage());
 */

var_dump("I am frost");
var_dump(memory_get_usage());
$array = array_fill(1,100, "frost");
foreach ($array as $key=>$value) {
    ${$value . $key} = null;
}

var_dump(memory_get_usage());
foreach ($array as $key=>$value) {
    unset(${$value . $key});
}
var_dump(memory_get_usage());
