#include<stdio.h>
int main()
{
    // int i=0;
    // do
    // {   
    //     printf("%d",i);
    //     i++;
    // }
    // while (i<=10);
    // return 0;


    int num ;
   do
    {
       printf("Enter your number : ");
       scanf("%d",&num);
    }   while (num!=10);
    
    printf("You have guessed the correct number .");
    return 0;
    
}