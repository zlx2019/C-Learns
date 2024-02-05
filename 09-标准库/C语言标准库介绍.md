# C 标准库

C语言是一种通用的、面向过程式的计算机程序设计语言。C语言不但提供了丰富的库函数，还允许用户定义自己的函数。每个函数都是一个可以重复使用的模块，通过模块间的相互调用，有条不紊地实现复杂的功能。可以说C程序的全部工作都是由各式各样的函数完成的。

C 标准函数库（C standard library，缩写：libc）是在C语言程序设计中，所有匹配标准的头文件（head file）的集合，以及常用的函数库实现程序（如 I/O 输入输出和字符串控制）。标准函数库通常会随附在编译器上。因为 C 编译器常会提供一些额外的非 ANSI C 函数功能，所以某个随附在特定编译器上的标准函数库，对其他不同的编译器来说，是不兼容的。

1. ANSI C共包括15个头文件。
1. 1995年，Normative Addendum 1 （NA1）批准了3个头文件（iso646.h、wchar.h和wctype.h）增加到C标准函数库中。
1. C99标准增加了6个头文件（complex.h、fenv.h、inttypes.h、stdbool.h、stdint.h和tgmath.h）。
1. C11标准中又新增了5个头文件（stdalign.h、stdatomic.h、stdnoreturn.h、threads.h和uchar.h）。

至此，C标准函数库共有29个头文件

**ANSI C**

| 头文件文件 | 简介说明 |
|---|---|
| `<stdio.h>` | 标准I/O库 |
|`<ctype.h>` | 字符的判断和大小写转换 |
| `<stdlib.h>` | 标准工具库函数：定义数值转换函数，伪随机数生成函数，动态内存分配函数，过程控制函数。 |
| `<string.h>` | 字符串处理函数 |
| `<assert.h>` | 包含断言宏，被用来在程序的调试版本中帮助检测逻辑错误以及其他类型的bug。 |
| `<limits.h>` | 定义了整数类型的一些极限值 |
| `<stddef.h>` | 一些标准宏定义 |
| `<time.h>`| 时间相关 |
| `<float.h>`| 浮点运算与限制 |
| `<math.h>` | 数学函数 |
| `<errno.h>` | 用来测试由库函数报的错误代码。 |
| `<locale.h>` | 定义C语言本地化函数 |
| `<setjmp.h>` | 跨函数跳转 |
| `<signal.h>` | 信号|
| `<stdarg.h>` | 可变参处理 |

**NA1**

| 头文件文件 | 简介说明 |
|---|---|
| `<iso646.h>` |定义了许多操作符宏定义|
| `<wchar.h>` | |
| `<wctype.h>` | |

**C99**

| 头文件文件 | 简介说明 |
|---|---|
| `<stdint.h>和<inttypes.h>`| 增加了可移植的整型 |
| `<complex.h>` | 一组操作复数的函数|
| `<fenv.h>` | |
| `<stdbool.h>` | 新增了布尔类型 |
| `<tgmath.h>` | |

**C11**

| 头文件文件 | 简介说明 |
|---|---|
| `<stdalign.h>` | |
| `<stdatomic.h>` | |
| `<stdnoreturn.h>` | |
| `<threads.h>` | 定义用于管理多个线程以及互斥和条件变量的函数 |
| `<uchar.h>` |  |


具体可以参考[维基百科：C标准函数库](https://zh.wikipedia.org/wiki/C%E6%A8%99%E6%BA%96%E5%87%BD%E5%BC%8F%E5%BA%AB)


---
## 针对不同平台

- [Windows 编程之路](https://lellansin.wordpress.com/tutorials/windows-%E7%BC%96%E7%A8%8B%E4%B9%8B%E8%B7%AF/)

