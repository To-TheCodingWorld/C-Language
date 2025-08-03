#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the 1st side :");
    scanf("%d",&a);

    printf("Enter the 2nd side :");
    scanf("%d",&b);

    printf("Enter the 3rd side :");
    scanf("%d",&c);

    printf("Enter the 4th side :");
    scanf("%d",&d);

    int Perimeter = a+b+c+d;
    printf("Perimeter of the rectangle is : %d in cms",Perimeter);
    return 0;
}