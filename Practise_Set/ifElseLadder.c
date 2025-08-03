#include<stdio.h>
int main(){
    int age;
    printf("Welcome to the ARTO .\n\n Please enter your age : ");
    scanf("%d",&age);

    if (age<18)
    {
        printf("You are not eligable for driving licence\n");
    }
    else if (age>=70)
    {
       printf("Your are too old, you can't apply.\n");
    }
    else
    {
        printf(" You are  eligible for driving licence\n");
    }
    printf("Your age is : %d",age);
    return 0;
    
}