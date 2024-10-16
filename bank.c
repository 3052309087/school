#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void add(int *str, int *str2)
{
    int a, b, c;
    printf("请输入你的账户");
    scanf("%d", &a);
    for (int i = 0; str[i]!= 0; i++)
    {
        if (str[i] == a)
        {
            printf("请输入金额");
            scanf("%d", &b);
            c = str2[i] + b;
            str2[i] = c;
            printf("存款成功\n");
            printf("余额为：%d\n", str2[i]);
            return;
        }
        
    }
    printf("账户不存在\n");
    return;
}

void qvkuan(int *str,int *str2)
{
    int a, b, c;
    printf("请输入你的账户");
    scanf("%d", &a);
    for (int i = 0; str[i]!= 0; i++)
    {
        if (str[i] == a)
        {
            printf("请输入金额");
            scanf("%d", &b);
            if (b > str2[i])
            {
                printf("余额不足\n");
                return;
            }
            c = str2[i] - b;
            str2[i] = c;
            printf("取款成功\n");
            printf("余额为：%d\n", str2[i]);
            return;
        }
        
    }
    printf("账户不存在\n");
    return;
}

void chaxun(int *str,int *str2)
{
    int a, b, c;
    printf("请输入你的账户");
    scanf("%d", &a);
    for (int i = 0; str[i]!= 0; i++)
    {
        if (str[i] == a)
        {
            printf("余额为：%d\n", str2[i]);
            return;
        }
        
    }
    printf("账户不存在\n");
    return;
}

void zhanghu(int *p,int *str)
{
    int a, b, c;
    printf("请输入你要添加的账户");
    scanf("%d", &a);
    b = *p;
    str[b] = a;
    b++;
    *p = b;
    printf("添加成功");
}
    
    
    
int main()
{
    int str[9999] = {0};
    int str2[9999] = {0};
    int count = 0;
    while (1)
    {   
        int a;
        int b;
        printf("1.存款\n");
        printf("2.取款\n");
        printf("3.查询余额\n");
        printf("4.添加账户\n");
        printf("5.退出\n");
        printf("请输入您的选择：");
        scanf("%d", &a);
         switch (a)
        {
        case 1:
        add(str,str2);
        break;
        
        case 2:
        qvkuan(str,str2);
        break;
        

        case 3:
        chaxun(str,str2);
        break;

        case 4:
        zhanghu(&count,str);
        break;
        
        case 5:
        system("pause");
        return 0;
        
        default:
        printf("输入错误");
        break;
        }
    
  
   }
    
}