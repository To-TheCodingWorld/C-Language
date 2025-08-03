#include<stdio.h>
int main()
{
    int num;
    printf("Welcome to the Multification Table....\n");
    printf("Enter the table name : ");
    scanf("%d",&num);

    for(int i=1;i<=10;i++){
        printf("%d X %d = %d \n",num,i,i*num);
    }
    return 0;
}