#include<stdio.h>
int main()
{ 
    int age;
    printf("Enter your age : ");
    scanf("%d",& age);

    if (age<13)
        printf("You are a child .");
    else if(age<20)
        printf("You are a teenager");
    else if(age<60)
        printf("You are a adult");
    else
        printf("You are a senior citizen");
     return 0;
}