#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number :");
    scanf("%d",&num);

    return num>=0 ? printf("%d",num) :printf("%d",-num);
}