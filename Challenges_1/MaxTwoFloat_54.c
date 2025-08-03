#include<stdio.h>
float Max(float,float);
int main()
{
    float first,second;
    printf("Welcome to the maximum number checker\n");
    printf("Please enter the first number: ");
    scanf("%f",&first);
    printf("Please enter the second number: ");
    scanf("%f",&second);
    
    printf("The Max number is : %f",Max(first,second));
   
    return 0;
}

float Max(float x,float y){
    if(x>y)
        return x;
    else
        return y;
}