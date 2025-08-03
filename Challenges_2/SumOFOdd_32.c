#include<stdio.h>
int main()
{
    int num;
    printf("Welcome to the Sum of Odd Number....\n");
    printf("Enter the number : ");
    scanf("%d",&num);

    int Add=0;
    for(int i=1;i<=num;i++)
    {
        if(i%2!=0)
            Add = Add+i;
    }
    printf("%d",Add);
    return 0;
}