#include <stdio.h>
#include <stdlib.h>
int main()
{  
    printf("请输入你要输入的数字个数 ");
    int b = 0;
    int ii = 0;
    int e = 0;
    int f = 0;
    scanf("%d",&b);
    int len1[b];
    printf("请输入%d个数字 ",b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d",&len1[i]);
    }
    
    while (ii < b-1)
    {
    if (len1[ii]>len1[ii+1])
  {
    e=len1[ii];
    len1[ii]=len1[ii+1];
    len1[ii+1]=e;
    ii = 0;//使得交换从头开始
    for (int i = 0; i < b; i++)
    {
        printf("%d ",len1[i]);
        f++;
        if (f == b)
        {
            printf("\n");
            f = 0;
        }
        
    }//输出每一相邻数字交换后的结果
    
  }
    else{
        ii++;
        }


  
}//冒个泡
for (int i = 0; i < b; i++)
{
    printf("%d ",len1[i]);
}
    system("pause");
    return 0;

}