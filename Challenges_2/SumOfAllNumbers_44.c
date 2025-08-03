#include<stdio.h>
int main(){
    int num;
    int Add=0;
    do
    {
       printf("Enter the number : ");
       scanf("%d",&num);
        Add =Add+num;
    } while ((num!=0));
    
    printf("The Sum of all numbers are : %d",Add);
    return 0;
}