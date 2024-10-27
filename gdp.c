#include <stdio.h>
#include <math.h>
int main() {
    double gdp = 1.0;  // 假设初始国民生产总值为1
    double rate;  // 年增长率为9%
    int years = 10;  // 10年
    double final_gdp, growth_percentage;
    printf("请输入年增长率");
    scanf("%lf%%",&rate);
    // 计算最终的国民生产总值
    final_gdp = gdp * pow(1 + rate / 100, years);//1+rate/100的years次方
    // 计算增长百分比

    growth_percentage= (final_gdp / gdp - 1) * 100;
    // 输出结果

    printf("10年后的国民生产总值与现在相比增长了 %.2f%%\n", growth_percentage);
    return 0;
}

