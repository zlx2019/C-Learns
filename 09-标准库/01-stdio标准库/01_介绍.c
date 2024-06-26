#include <stdio.h>

/**
 * stdio.h 称为标准I/O库，提供了一系列用于输入和输出的函数、宏和文件操作相关的定义。
 *
 * 该头文件提供的类型有如下:
 *  - size_t: 无符号整型，是sizeof 运算符的返回值，表示一个值所占的字节数;
 *  - FILE: 文件流句柄对象，表示一个文件对象类型;
 *  - fpos_t: 用于标记文件流中位置的对象类型;
 *
 * 提供的宏定义有如下:
 *  - NULL: 这属于指针类型的值，可表示一个空指针;
 *  - EOF: 一个特殊的标志常量，值为-1，用于指示文件结束的符号。在使用标准库函数进行文件读取的时候，当读取到文件末尾时，会返回 EOF;
 *  - stdin: 标准输入;
 *  - stdout: 标准输出;
 *  - stderr: 标准错误输出;
 *
 * 提供的函数有如下:
 * 文件操作函数:
 *  fopen() -  打开文件。
 *  fclose() - 关闭文件。
 *  freopen() - 重新定向一个已打开的文件流到另一个文件。
 *  rename() - 重命名文件。
 *  remove() - 删除文件。
 *
 * 输出函数:
 *  printf() - 格式化输出到标准输出流。
 *  fprintf() - 格式化输出到指定文件流。
 *  sprintf() - 格式化输出到字符串。
 *  fputc() - 将字符写入到指定文件流。
 *  putchar() - 将字符写入到标准输出。
 *  fputs() - 将字符串写入到指定文件流。
 *  puts() - 将字符串写入到标准输出。
 *  rwrite() - 将缓冲区中的数据，按照数量写入到指定文件流中。
 *
 * 输入函数:
 *  scanf() - 从标准输入流读取格式化输入。
 *  fscanf() - 从指定文件流读取格式化输入。
 *  sscanf() - 从字符串读取格式化输入。
 *  fgetc() - 从指定文件流读取一个字符。
 *  getchar() - 从标准输入读取一个字符。
 *  fgets() - 从指定文件流读取字符串。
 *  gets() - 从标准输入读取字符串（不建议使用，因为存在安全风险）。
 *  fread() - 从文件流中按照指定的数量，读取到缓冲区中。
 *
 * 文件读写指针操作函数:
 *  ftell() - 返回当前文件读写位置。
 *  fseek() - 移动文件读写位置。
 *  rewind() - 将读写位置重新定位到文件初始位置。
 *
 * 错误处理函数:
 *  feof() - 检查文件流是否已经全部读取完成。
 *  ferror() - 检查文件流是否遇到了错误。
 *  perror() - 将上一个函数发生的错误信息，输出到标准错误输出。
 */
