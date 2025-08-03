#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Welcome to the Armstrong checker....\n");
    printf("Enter the  number : ");
    scanf("%d",&num);

    int a;
    int Arm=num;
    int Sum =0;
    while(num>0)
    {   
       a=num%10;
       Sum =Sum +(a*a*a);
       num=num/10;
    }

    if (Arm==Sum)
        printf("%d is the  Armstrong number.",Arm);
    else
         printf("%d is not  Armstrong number.",Arm);
    return 0;
}