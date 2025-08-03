#include<stdio.h>

int fun(int,int);
int main()
{
    int a=16,b=23;
    printf("The number is(before) : %d %d\n",a,b);
    fun(a,b);
    printf("The number is(after) : %d %d\n",a,b);
    return 0;
}

int fun(int x,int y)
{
    x=x+5;
    y=y+5;
   printf("The increment number is :%d %d\n",x,y);
}