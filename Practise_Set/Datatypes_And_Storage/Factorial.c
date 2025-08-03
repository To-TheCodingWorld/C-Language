#include<stdio.h>

long factorial(int);


int main(){
   
    printf("\nThe factorial of 4 is  : %ld",factorial(4));
    printf("\nThe factorial of 10 is  : %ld",factorial(10));
    printf("\nThe factorial of 15 is  : %ld",factorial(15));
    printf("\nThe factorial of 21 is  : %ld",factorial(20));
    
    return 0;
}
long factorial(int num)
{
    long  result =1;
    for(int i=2;i<=num;i++)
    {
        result *=i;
    }
    return result;
}