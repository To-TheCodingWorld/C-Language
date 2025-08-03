#include<stdio.h>

long factorial(int);
long long fact(int);


int main(){
   
    printf("\nThe factorial of long is  : %ld",factorial(20));

    printf("\nThe factorial of long long is  : %lld",fact(20));
    
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

long long fact(int num){
    long long  Ans =1;
    for(int i=2;i<=num;i++)
    {
       Ans *=i;
    }
    return Ans;
}