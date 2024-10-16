#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d;
    printf("请输入a+bi乘c+di分别的实部和虚部 ", a, b, c, d);
    scanf("%f%f%f%f", &a, &b, &c, &d);
      if (fabs(a*c - b*d) < 0.000001 && fabs(a*d + b*c) < 0.000001)//判断是否为o
    {
        printf("复数乘法：0\n");
        return 0;
    }
    if (fabs(a*c - b*d) < 0.000001)
    {
        printf("复数乘法：%.2fi\n", a*d+b*c);
        return 0;
    }
    if (fabs(a*d + b*c) < 0.000001)
    {
        printf("复数乘法：%.2f\n", a*c-b*d);
        return 0;
    }
  
    //判断是否为实数或纯虚数
    
    
    printf("复数乘法：%.2f+%.2fi\n", a*c-b*d, a*d+b*c);//非纯虚数或实数的复数乘法
    return 0;
}