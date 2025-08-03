#include<stdio.h>
int main()
{
    int first,second;
    printf("Welcome to the LCM Calculator....\n");
    printf("Enter the first number : ");
    scanf("%d",&first);

    printf("Enter the second number : ");
    scanf("%d",&second);

    int Max = (first>second)?first:second;
    int LCM=first*second;
    while(Max<=LCM)
    {
        if(Max%first==0 && Max%second==0){
            printf("The LCM of %d and %d is : %d",first , second , Max);
            break;
        }
        Max++;
    }
    return 0;

}