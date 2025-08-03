#include<stdio.h>
int Add(int,int,int,int);
int main()
{
   printf("Welcome to the Adding $ number\n");
   printf("\nThe Sum is :%d",Add(4,6,5,2));
   printf("\nThe 2nd Sum is : %d",Add(4,5,5,9));
   printf("\nThe 3rd Sum is :%d",Add(44,96,67,11));

    return 0;
}

int Add(int a,int b,int c,int d){
    int Sum = a+b+c+d;
    return Sum;
}