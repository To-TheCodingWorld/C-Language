#include<stdio.h>
int main()
{
    int num;
    printf("Welcome to the Factorial of a Number....\n");
    printf("Enter the number : ");
    scanf("%d",&num);

    // int fact=1;
    // for(int i=1;i<=num;i++)
    // {
    //     fact = fact*i;
    // }

    int i=1;
    int fact=1;
    while(i<=num){
        fact=fact*i;
        i++;
    }
    printf("%d",fact);
    return 0;
}