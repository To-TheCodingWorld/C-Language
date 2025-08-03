#include<stdio.h>
int main()
{
    int base , height;

    printf("Enter the base of the triangle : ");
    scanf("%d",&base);

    printf("Enter the height of the triangle : ");
    scanf("%d",&height);

    float Area = 0.5*base*height;
    printf("The area of the triangle is : %f",Area);
    return 0;
}