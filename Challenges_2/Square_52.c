#include<stdio.h>
int Square(int);
int main()
{
    int num;
    printf("Welcome to the square of the number\n");
    printf("Please enter the number: ");
    scanf("%d",&num);
    
    printf("The Square is :%d",Square(num));
   
    return 0;
}

int Square(int x){
    int Result = x*x;
    return Result;
}