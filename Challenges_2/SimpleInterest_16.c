#include<stdio.h>
int main()
{
    int P,R,T;
     printf("Enter the Principle of the amount : ");
     scanf("%d",&P);

     printf("Enter the rate of the amount : ");
     scanf("%d",&R);

     printf("Enter the year of the rate : ");
     scanf("%d",&T);

     int Interest = (P*R*T)/100;
     printf("The simple interest is : %d" ,Interest);
     return 0;
}