#include<stdio.h>
int main()
{
    int first,second,third;

    printf("Please enter the three number : ");
    scanf("%d%d%d",&first,&second,&third);

    if (first>second && second>third)
        printf("The greatest number is : %d",first);
    else if (second>first && first>third)
         printf("The greatest number is : %d",second);
    else
        printf("The greatest number is : %d",third);


    return 0;
}