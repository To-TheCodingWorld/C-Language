#include<stdio.h>
int main()
{
    int num;
    printf("Welcome to the Reverse number checker....\n");
    printf("Enter the  number : ");
    scanf("%d",&num);

    int i;
    int reverse =0;
    while(num>0)
    {
        i=num%10;
        reverse =reverse*10 + i;
        num=num/10;
    }
    printf("The Revere number is : %d",reverse);
    return 0;
}