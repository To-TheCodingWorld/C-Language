//#define PI 3.14
#include<stdio.h>
int main()
{
    const float PI = 3.14;
    int radius;
    printf("Enter the radius of the circle : ");
    scanf("%d",&radius);

    int Area = PI*radius*radius;
    printf("The area of the circle is : %d in cms.",Area);
    return 0;
}