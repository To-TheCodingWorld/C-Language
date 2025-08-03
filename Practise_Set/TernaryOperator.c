#include<stdio.h>
int main()
{
    char gender;
    printf("PLease enter your gender(M/F) : ");
    scanf("%c",&gender);

    gender == 'M' ? printf("Male"): printf("Female");
    return 0;
}