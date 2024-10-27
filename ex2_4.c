#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main() {
    double gdp = 1.0;  
    double rate = 0; 
    printf("请输入年增长率：");
    scanf("%lf", &rate);
    printf("您输入的年增长率为：%.lf\n", rate);
    int years = 10;  // 10年
    double f_gdp, per;

   
    f_gdp = gdp * pow(1 + rate / 100, years);

    // 计算增长百分比
    per = (f_gdp / gdp - 1) * 100;

    // 输出结果
    printf("10年后的国民生产总值与现在相比增长了 %.2f%%\n", per);
    system("pause");
    return 0;
}
