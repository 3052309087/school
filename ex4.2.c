#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("请输入一个小于1000的正整数: ");
    scanf("%d", &num);

    if (num >= 1000 || num <= 0) {
        printf("输入的数据不符合要求，请重新输入。\n");
    } else {
        int sqrt_int = (int)sqrt(num);
        printf("整数部分的平方根为: %d\n", sqrt_int);
    }

    return 0;
}
