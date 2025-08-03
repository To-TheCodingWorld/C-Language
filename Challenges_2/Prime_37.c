#include<stdio.h>
int main()
{
    int num;
    printf("Welcome to the Prime checker....\n");
    printf("Enter the  number : ");
    scanf("%d",&num);

   
    // for(int i=2;i<num;i++)
    // {
    //     if(num%i==0){
    //         printf("%d is not Prime",num);
    //         return 0;
    //     }
    // }
    // printf("%d is the prime number ",num);
    //     return 0;
    // return 0;


    //while loop........
    int i=2,prime=0;
    while(i<num){ 
        if(num%i==0){
            prime++;
        }
        i++;
    }
    if(prime==0)
        printf("%d is the Prime number",num);
    else
        printf("%d is not the prime number",num);
    return 0;
}