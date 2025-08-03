#include<stdio.h>
int get_average(int,int,int,int,int);
int main()
{
    int num1,num2,num3,num4,num5;
    printf("Welcome to the Average number checker\n");
    printf("Please enter the 1st number: ");
    scanf("%d",&num1);
    printf("Please enter the 2nd number: ");
    scanf("%d",&num2);
    printf("Please enter the 3rd number: ");
    scanf("%d",&num3);
    printf("Please enter the 4th number: ");
    scanf("%d",&num4);
    printf("Please enter the 5th number: ");
    scanf("%d",&num5);

    
    float average =get_average(num1,num2,num3,num4,num5);
    printf("The Average is :%.2f",average);
   
    return 0;
}

int get_average(int a,int b,int c,int d,int e){
    int Result = (a+b+c+d+e)/5;
    return Result;
}