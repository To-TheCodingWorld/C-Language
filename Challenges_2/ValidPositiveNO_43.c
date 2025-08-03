#include<stdio.h>
int main(){
    int num;
    printf("Enter the user number : ");
    scanf("%d",&num);

    int Same=num;
    do
    {
       printf("Enter the valid user number : ");
       scanf("%d",&Same);
    } while ((Same!=num));
    
    printf("You have entered Correctly.");
    return 0;
}