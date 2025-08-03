#include<stdio.h>
int main()
{
    int num;
    printf("Welcome to the Sum of Digit....\n");
    printf("Enter the number : ");
    scanf("%d",&num);

    //While loop........
    int a=0;
    int Sum=0;
    while(num>0)
    {
        a=num%10;
        Sum = Sum+a;
        num=num/10;
    }

    printf("%d",Sum);
    return 0;
}
