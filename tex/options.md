####文档类可选的类型有
- article
- report
- book

####其常见的选项有下面几种
- 10pt, 11pt, 12pt  即正文字号
- letterpaper, a4paper  缺省是paper
- notitlepage, titlepage    标题后是否另起新页
- onecolumn, twocolumn  栏数，缺省单栏
- oneside, twoside  单面双面
- landscape 打印方向，默认横向
- openany, openright    article没有此选项，report默认any，book默认right。
- draft     草稿模式，可以在右边标上粗黑线提醒用户。


####均匀断字要用\hyphenation{}

####字样命令
- \textrm{} roman
- \textsf{} sans serif
- \texttt{} typewriter
- \emph{}   emphasized
- \textsc{} small case
- \textbf{} bold face
- \textit{} italy
- \textsl{} slanted
- \underline{} underlined


####缩进
- quote 两端缩进
- quotation 比前者增加了首行缩进
- verse     增加了第二行起的缩进


####原文照排
- \begin{verbatim}
- \begin{verbatim*}

####交叉引用
被引用处\label{sec}

引用处\pageref{sec}页\ref{sec}节

####盒子
- \mbox 没有边框
- \fbox 有边框
- \makebox  
- \framebox 后两者提供了对其方式控制选项，如
```
\makebox[100pt][l]{left}
\framebox[100pt][r]{right}
```
- \parbox
- \minibox 指与周围内容的关系，有上中下三种，分别是tcb
```
\parbox[t][90pt]{something}something else.
```

####数学公式
- ^ _ \sqrt
- 分数\frac
- 运算符 
```
\pm \times \div \cdot \cap \cup \geq \leq \neq \approx \quiv

\sum \prod \lim \int
```


