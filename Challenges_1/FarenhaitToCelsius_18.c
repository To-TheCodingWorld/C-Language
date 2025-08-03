#include<stdio.h>
int main()
{
    float C,F;
    printf("Welcome to the Converter....\n");

    printf("Please enter your farenhait temperature :");
    scanf("%f",&F);

    C=(F-32)*5/9;
    printf("The celsius tempereture is : %.2f",C);
    return 0;
}