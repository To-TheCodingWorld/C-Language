#include<stdio.h>
int main(){
    int age;
    char is_Indian;
    printf("Welcome to the ARTO .\n\n Please enter your age : ");
    scanf("%d",&age);

     printf("Are you an Indian(Y/N) : ");
    scanf(" %c",&is_Indian);

    if (age>18 && age<=70 && is_Indian=='Y')
    {
        printf("You are eligable for driving licence\n");
    }
    // else if (age>=70)
    // {
    //    printf("Your are too old, you can't apply.\n");
    // }
    else
    {
        printf(" You are not eligible for driving licence\n");
    }
    printf("Your age is : %d",age);
    return 0;
    
}