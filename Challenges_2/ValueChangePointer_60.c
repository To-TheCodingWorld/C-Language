#include<stdio.h>
int main(){
    int num;
    printf("Enter your number :");
    scanf("%d",&num);

   int *ptr=&num;
   *ptr = 45;
   printf("The number is : %d",num); 
   return 0;
}