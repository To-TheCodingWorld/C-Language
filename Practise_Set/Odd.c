#include<stdio.h>
int main()
{
    int num =0;
    while (num!=10)
    {
       printf("Enter your number : ");
       scanf("%d",&num);
    }

    printf("You have guessed the correct number .");
    return 0;
    
}