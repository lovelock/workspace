###概念
1. 闭包就是函数的局部变量集合，只是这些局部变量在函数返回后会继续存在
2. 闭包就是函数的堆栈在函数返回后并不释放，我们也可以理解为这些函数堆栈并不在栈上分配而是在堆上分配。
3. 当在一个函数内定义另一个函数就会产生闭包

###举例
```JavaScript
function greeting(name){
    var text = ‘Hello’ + name;
    return function(){
        alert(text);
    }
}

var sayHello = greeting(“closure”);
sayHello();
```

