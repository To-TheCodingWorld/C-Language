#include<stdio.h>
int main()
{
    int num;
    printf("Please enter the number : ");
    scanf("%d",&num);

    if (num>0)
        printf("The number is Positive");
    else if (num==0)
        printf("The number is zero");
    else
        printf("The number is Negative");
    return 0; 
}