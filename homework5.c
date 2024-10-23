#include <stdio.h>
#include <stdlib.h>
int main() 
{
   int cire = 56;
   int a = 0;//设a青蛙在初始位置
   int b = 28;//设b青蛙在初始位置
   int count = 0;//计数器
   while(a!= b)//当a和b不相等时
   {
    a = a + 3;
    b = b + 9;
    a = a%cire;
    b = b%cire;
    count++;//计数器加1
    printf("第%d次移动，青蛙a在%d，青蛙b在%d\n",count,a,b);
   }
   printf("共经过%d次移动，青蛙才会相遇。",count);
   
   return 0;
}


