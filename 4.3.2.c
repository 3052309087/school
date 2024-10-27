#include <stdio.h>

int main() {
    int score;
    printf("请输入一个百分制成绩: ");
    scanf("%d", &score);

    if (score > 100 || score < 0) {
        printf("输入数据错误。\n");
    } else if (score >= 90) {
        printf("成绩等级为: A\n");
    } else if (score >= 81) {
        printf("成绩等级为: B\n");
    } else if (score >= 70) {
        printf("成绩等级为: C\n");
    } else if (score >= 60) {
        printf("成绩等级为: D\n");
    } else {
        printf("成绩等级为: E\n");
    }

    return 0;
}
