#include <stdio.h>
int main()
{
    #define pi 3.1415926
  float r = 1.5;
  float h = 3.0;
  float d;
  printf("请输入需要计算的圆半径");
  scanf("%f",&d);
  float c = d*2*pi;
  float s = d*pi*pi;
  float e = 4*pi*d*d;
  float f = (4/3)*pi*d*d*d;
  float g = s*h;
  printf("圆周长是%.2f\n",c);
  printf("圆面积是%.2f\n",s);
  printf("圆球表面积是%.2f\n",e);
  printf("圆球体积是%.2f\n",f);
  printf("圆柱体积是%.2f",g);
  getchar();
    return 0;
}//