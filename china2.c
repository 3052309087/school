#include <stdio.h>

int main() {
    // 初始字符赋值为 'T', 'o', 'd', 'a', 'y'
    char c1 = 'T', c2 = 'o', c3 = 'd', c4 = 'a', c5 = 'y';

    // 字符替换规则：后面第4个字母，并处理 'W', 'X', 'Y', 'Z'
    c1 = (c1 <= 'W') ? (c1 + 4) : (c1 - 22); // 'W' -> 'A'
    c2 = (c2 <= 'W') ? (c2 + 4) : (c2 - 22); // 处理超出 'Z' 的情况
    c3 = (c3 <= 'W') ? (c3 + 4) : (c3 - 22);
    c4 = (c4 <= 'W') ? (c4 + 4) : (c4 - 22);
    c5 = (c5 <= 'W') ? (c5 + 4) : (c5 - 22);

    // 输出加密后的字符
    putchar(c1); putchar(c2); putchar(c3); putchar(c4); putchar(c5);
    printf("\n");
    printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);

    return 0;
}