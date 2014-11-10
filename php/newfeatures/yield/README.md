### PHP `yield`
1. range函数
函数内部实现会存储每个迭代的中间过程，即每个中间变量都有内存空间。
导致程序使用的**内存空间**增大，同时，**分配内存**, **回收内存**
都导致程序的运行时间增加。
2. xrange函数
如果使用yield实现xrange函数，里面所有的中间变量都只使用一个内存$i，
这样空间和时间的占用都会变小。

#### Lua `yield`
> 程序运行到`yield`的时候，使用协程将上下文环境记录住，然后将程序
> 操作归还住函数，当住函数调用
> resmue的时候，会重新唤起协程，读取`yield`记录的上下文。

### PHP finally
和Java的finally关键字一样，经典的try...catch...finally三段式异常处理。

### PHP foreach支持list()
对数组的数组进行迭代，现在只需要`foreach`+`list`。

### PHP `empty`支持自定义函数
`empty()`的参数可以是自定义的函数了。

### PHP 非变量array和string都能支持下标获取

### 类名通过::class获取

### 增加了opcache扩展
