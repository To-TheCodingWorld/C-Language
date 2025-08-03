#include<stdio.h>
int fibonacci(int pos);
int main()
{
    int num;
    printf("Welcome to the fibonacci series\n");
    printf("Please enter your number: ");
    scanf("%d",&num);

   for(int i=0;i<=num;i++)
    printf(" %d",fibonacci(i));
    return 0;
    
   
}

int fibonacci(int pos){
    if(pos<=1){
        return pos;
    }
    int current =fibonacci(pos-1)+fibonacci(pos-2);
    return current;
}