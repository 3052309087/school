#include <stdio.h>
#include <math.h>

int main() {
    double principal = 1000.0;  // 初始存款本金
    double rate_1_year = 2.25;  // 1年期利率
    double rate_2_year = 2.70;  // 2年期利率
    double rate_3_year = 3.00;  // 3年期利率
    double rate_5_year = 3.50;  // 5年期利率
    double rate_current = 0.35; // 活期利率
    int years = 5;              // 存款年数
    double total_1, total_2, total_3, total_4, total_5;
    int i;

    // 一次存5年期
    total_1 = principal * pow(1 + rate_5_year / 100, 5);

    // 先存2年期，再存3年期
    double temp_2 = principal * pow(1 + rate_2_year / 100, 2); // 2年本息
    total_2 = temp_2 * pow(1 + rate_3_year / 100, 3); // 再存3年期

    //先存3年期，再存2年期
    double temp_3 = principal * pow(1 + rate_3_year / 100, 3); // 3年本息
    total_3 = temp_3 * pow(1 + rate_2_year / 100, 2); // 再存2年期

    //每年存1年期，连续存5次
    total_4 = principal;
    for (i = 0; i < 5; i++) {
        total_4 = total_4 * (1 + rate_1_year / 100); // 每年结算一次
    }

    // 活期存款，每季度结算一次，连续存5年
    total_5 = principal;
    for (i = 0; i < 5 * 4; i++) { // 每年4次，5年共20次
        total_5 = total_5 * (1 + rate_current / 100 / 4); // 每季度结算
    }

    // 输出结果
    printf("一次存5年期本息总和：%.2f元\n", total_1);
    printf("先存2年期，再存3年期本息总和：%.2f元\n", total_2);
    printf("先存3年期，再存2年期本息总和：%.2f元\n", total_3);
    printf("每年存1年期，连续存5次本息总和：%.2f元\n", total_4);
    printf("活期存款，每季度结算一次，5年本息总和：%.2f元\n", total_5);

    return 0;
}

