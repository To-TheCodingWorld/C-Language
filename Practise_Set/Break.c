#include<stdio.h>
int main()
{
    int num;
    printf("Welcome to the Multification Table.....\n");
    printf("Enter the number : ");
    scanf("%d",&num);

    for(int i=1;i<=100;i++){
        printf("%d X %d = %d\n",num,i,i*num);
        if(i==15)
            break;
    }
    return 0;
    
}