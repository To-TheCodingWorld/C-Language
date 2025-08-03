#include<stdio.h>
int main()
{
    int num;
    printf("Welcome to the Fibonacci Series....\n");
    printf("Enter the  number : ");
    scanf("%d",&num);

    printf(" 0");
    if(num>0)
        printf(" 1 ");


    int first=0;
    int second=1;
   
    while(second<=num)
    {   
       int third = first+second;
       printf("%d ",third);
       first=second;
       second=third;
    }
    return 0;
}