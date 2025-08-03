#include<stdio.h>

int main()
{
    int num;
    int *ptr =&num;
    printf("Welcome to the showcasing integer pointer\n");

    printf("Please enter the value :");
    scanf("%d",ptr);

    printf(" The value is : %d\n",*ptr);
    printf(" The value is : %d",num);
    return 0;
}