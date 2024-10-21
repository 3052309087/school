#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int play()
{
    int a = rand ()% 100;//生成100以内的随机数
    //int a = 10;
    int c = 1;
    while (1)
    {
    int b;
    printf("请猜一个数字");
    scanf("%d", &b);
    if (a == b)
    {
        printf("恭喜你猜对了！");
        printf("你总共猜了%d次", c);
        system("pause");
        return 0;
    }
    else if(b>a){
        printf("太大了！\n");
        c++;
    }
    else if(b<a){
        printf("太小了！\n");
        c++;
    }
    }
    
    
}
    
int main()
{
    while (1)
    {
        srand(time(NULL));//随机数种子
        int a;
        printf("1.play \n");
        printf("2.exit \n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            play();
            break;
        case 0:
            return 0;
        
        default:
            printf("输入错误，请重新输入！ \n");
            break;
        }
    }
    
}