#include<stdio.h>

int main()
{
    char character;
    char *ptr =&character;
    printf("Welcome to the showcasing character pointer\n");

    printf("Please enter character :");
    scanf("%c",ptr);

    printf(" The value is : %c\n",*ptr);
    printf(" The value is : %c",character);
    return 0;
}