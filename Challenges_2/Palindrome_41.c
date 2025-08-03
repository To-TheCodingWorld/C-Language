#include<stdio.h>
int main()
{
    int num;
    printf("Welcome to the Palondrome number checker....\n");
    printf("Enter the  number : ");
    scanf("%d",&num);

    int a;
    int Palin=num;
    int Store;
    while(num>0)
    {
        a=num%10;
        Store = Store * 10 + a;
        num=num/10;
    }
    
    if(Store==Palin)
        printf("%d is the palindrome number.",Store);
    else
        printf("%d is not the palindrome number.",Store);

    return 0;
}