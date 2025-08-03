#include<stdio.h>
int main()
{
    int Integer;
    float Decimal;
    double Doub;
    char Character;

    printf("The size of the int is : %lu\n",sizeof(Integer));
    printf("The size of the float is : %lu\n",sizeof(Decimal));
    printf("The size of the double is : %lu\n",sizeof(Doub));
    printf("The size of the char is : %lu\n",sizeof(Character));
    return 0;
}