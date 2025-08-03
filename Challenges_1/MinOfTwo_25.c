#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter your first number : ");
    scanf("%d",&num1);

    printf("Enter your second number : ");
    scanf("%d",&num2);

    int Max = num1>num2 ? num1:num2;
    printf("The max is %d",Max);

    return 0;
}