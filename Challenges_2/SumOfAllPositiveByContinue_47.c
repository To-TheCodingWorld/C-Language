#include<stdio.h>
int main(){
    int num;
    printf("Welcome to the sum of all positive numbers....\n");

   int Add=0;
    do
    {
       printf("Enter the number : ");
       scanf("%d",&num);
        Add =Add+num;
        if(num<0)
            continue;
    } while ((num!=0));
    
    printf("The Sum of all numbers are : %d",Add);
    return 0;
}
  