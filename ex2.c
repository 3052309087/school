#include <stdio.h>
#include <stdlib.h>


int main ()
{
    char cl, c2; // 定义字符变量
    cl = 97; // 将ASCII值97赋给cl
    c2 = 98; // 将ASCII值98赋给c2
    printf("%c %c\n", cl, c2); // 输出字符形式的cl和c2
    printf("%d %d\n", cl, c2); // 输出整数形式的cl和c2
    system("pause");
    return 0; // 返回0表示程序正常结束

}

