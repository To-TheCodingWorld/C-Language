#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Welcome to the calculator...\n\n");

    printf("Enter the first numbr : ");
    scanf("%d",&num1);

    printf("Enter the second number : ");
    scanf("%d",&num2);

    num3 = num1+num2;
    printf("The sum of two number is : %d",num3);
}