#include <stdio.h>
int main()
{
   float a;
   printf("请输入转换前华氏度");
   scanf("%f",&a);
   float b = (5/9.0)*(a-32);
    printf ("摄氏度是%.2f" , b);
    getchar();
    return 0;
}//华氏度转换摄氏度