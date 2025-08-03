#include<stdio.h>
int main()
{
    int score ;
    printf("Enter your score :");
    scanf("%d",&score);

    printf("Your category is ");
    return score>80? printf("High") : score>=50?printf("Moderate"):printf("Low");
   
}