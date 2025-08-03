#define pi 3.14
#include<stdio.h>
int main()
{
    int radius;
    printf("Enter the radius of the circle : ");
    scanf("%d",&radius);

    int Circum = 2*pi*radius;
    printf("The area of circumference is : %d",Circum);
    return 0;
}