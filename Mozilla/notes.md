## Extension和plugin的区别
插件帮助浏览器显示特殊内容，例如播放多媒体文件。常见的插件是flash player，而extension也跟搜索引擎插件不同，搜索引擎插件只是在搜索栏里面加入一个搜索引擎的地址而已。

## 扩展
一个扩展，通常是一个XPI(Cross-platform Installer Module)包，其实是一个zip类型的压缩包，里面包括必需的文件。一个标准的扩展包括的文件和文件的目录结构

### content
存放扩展的描述界面的XUL文件和增加行为的JavaScript文件。
### locale
存放本地化的相关文件，如果需要支持英文和中文，就可以在locale的目录下新建en-US和zh-CN目录来存放响应的本地化字符串。
### skin
存放的是一些css文件，用来定义扩展的外观。
### chrome.manifest
Chrome注册的清单文件
### install.rdf
分别包含了扩展安装的信息

#### Chrome
指的是应用程序窗口的内容区域之外的用户界面元素的集合，这些用户界面元素包括工具条，菜单，进度条和窗口的标题栏等。
Chrome提供者能为特定的窗口类型(浏览器窗口)提供Chrome，有三种基本的Chrome提供者
1. 内容(content)通常是XUL(XML User Interface Language)文件。而XUL文件将会指定扩展在FireFox中运行时表现的界面和功能。XUL文件是一种JavaScript文件设计的目的是描述窗口和对话框的内容。
2. 区域(locale)存放本地化信息
3. 皮肤(skin)描述Chrome的外观，包含CSS和图像信息

#### XULRuuner

