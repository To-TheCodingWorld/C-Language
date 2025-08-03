#include<stdio.h>
int main()
{
    char op;
    int x,y;
    printf("Welcome to the calculator ....\n");
    printf("Enter the number : ");
    scanf("%d %d",&x ,&y);
    printf("Enter the operation you want to perform :");
    scanf(" %c",&op);

    switch (op)
    {
    case '+':printf("%d",x+y);
            break;
    case '-':printf("%d",x-y);
            break;
    case '*':printf("%d",x*y);
            break;
    case '/':printf("%d",x/y);
            break;
    case '%':printf("%d",x%y);
            break;
    default : printf("Invalid Operator");
            break;
    }
    return 0;
}