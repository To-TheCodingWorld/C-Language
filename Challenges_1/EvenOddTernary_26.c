#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number :");
    scanf("%d",&num);

    return num%2==0 ? printf("Even"):printf("Odd");
}