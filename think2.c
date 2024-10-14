#include <stdio.h>
void forward(float a) 
{
    movement(a,a,a,a);
}
   
void back(float a)
{
    movement(-a,-a,-a,-a);
}
   
void left(float a)
{
    movement(-a,a,a,-a);//左平移
}
   
void right(float a)
{
    movement(a,-a,-a,a);//右平移
}
void left2(float a)
{
    movement(-a,-a,a,a);//左转弯
}
   
void right2(float a)
{
    movement(a,a,-a,-a);//右转弯
}//以上是麦轮


void forward1(float a) 
{
    movement(a,a,a,a);
}
   
void back1(float a)
{
    movement(-a,-a,-a,-a);
}
   
void left1(float a)
{
    movement(0,a,a,a);
}
   
void right1(float a)
{
    movement(a,0,a,a);
}//以上是常规轮
