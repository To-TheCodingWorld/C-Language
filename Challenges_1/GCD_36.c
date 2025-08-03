#include<stdio.h>
int main()
{
    int first,second;
    printf("Welcome to the GCD Calculator....\n");
    printf("Enter the first number : ");
    scanf("%d",&first);

    printf("Enter the second number : ");
    scanf("%d",&second);

    int Max = (first>second)?first:second;
   
    for(int i=Max;i>=1;i--)
    {
        if(first%i==0 && second%i==0){
            printf("The GCD of %d and %d is : %d",first , second , i);
            break;
        }
    }
    return 0;

}