#include<stdio.h>
#include<math.h>
int main()
{
    float P,R,t;
     printf("Enter the Principle of the amount : ");
     scanf("%f",&P);

     printf("Enter the rate of the amount : ");
     scanf("%f",&R);

     printf("Enter the year of the rate : ");
     scanf("%f",&t);

     float res = 1+R/100;
     float Interest = P*pow(res,t);
     printf("The compound interest is : %.2f" ,Interest);
     return 0;
}