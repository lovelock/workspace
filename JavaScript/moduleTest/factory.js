// 根据模块系统的路径解析规则可以得到模块的绝对路径
define(function(require, exports, module){
    console.log(module.uri);
});
