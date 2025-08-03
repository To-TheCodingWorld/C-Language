#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your marks : ");
    scanf("%d",&mark);

    if (mark>90)
        printf("You have got 'A' grade");
    else if(mark>75)
        printf("You have got 'B' grade");
    else if(mark>60)
        printf("You have got 'C' grade");
    else if(mark>30)
        printf("You have got 'D' grade");
    else
        printf("You have got 'F' grade");

    
     return 0;
}