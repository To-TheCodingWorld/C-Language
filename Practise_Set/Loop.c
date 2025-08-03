#include<stdio.h>
int main()
{
    // for (int i = 0; i <= 50; i++)
    // {
    //     // printf("Mahabir Mahato\n");
    //     printf("%d ",i);
    // }

    int num;
    printf("Welcome to the Multification Table.....\n");
    printf("Enter the number : ");
    scanf("%d",&num);

    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",num,i,i*num);
    }
    return 0;
    
}