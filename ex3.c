#include<stdio.h>
#include <stdlib.h>
int main()
{
    int a, b; // 定义整型 a 和 b
    float y; // 定义浮点型 y
    char cl, c2; // 定义字符 cl 和 c2

    // 输入整型变量 a 和 b
    scanf("a=%db=%d", &a, &b);
    // 输入浮点型变量 y
    scanf("%f", &y);
    // 输入字符变量 cl 和 c2
    scanf(" %c%c", &cl, &c2);
    system("pause");
    return 0; // 程序结束
}

