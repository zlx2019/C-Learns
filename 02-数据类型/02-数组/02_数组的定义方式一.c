#include <stdio.h>
#include <string.h>

/**
 * 数组的定义语法：
 *  第一种方式:
 *    数组类型 数组名[数组长度] = {初始化元素};
 */

int main(int argc, char *argv[]) {
    /// 1. 定义长度为5的int类型数组
    int intArr[5];
    // 该数组占用栈空间的20个字节，并且此时的元素值都是随机的'垃圾值';
    // 注意不同的系统平台，可能对于数组的初始值处理有所不同
    // 比如在windows X64平台下，值不赋值之前，都是不确定的，而在Mac Arm平台下，值又可能都是0;
    for (int i = 0; i < 5; i++){
        printf("%d,",intArr[i]);
    }
    // -21321421,243,0,1,-45215123,

    ///2. 定义一个int类型数组，长度由元素初始化列表决定
    // 这种方式表示数组的长度为4，因为{}中指定了4个元素值
    // 并且每个元素的值都已经初始化完成
    int intArr2[] = {1,2,3,4};
    // 1,2,3,4


    /// 如果想初始化数组，可以有以下两种方式:
    /// 1. 定义时就初始化
    int intArr3[3] = {}; // 表示将所有的元素，都初始化为0;

    /// 2. 利用C99的新特性也可以做Memberwise Initialization
    int intArr4[3] = {[2] = 100};

    /// 3. 通过memset将数组的所有字节，全部设置为0;
    int intArr5[5];
    memset(intArr5,0, sizeof(intArr5)); // 将 intArr4的所有字节，设置为0
    return 0;
}
