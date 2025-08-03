#include<stdio.h>
int main ()
{
    int day;
    printf("Please enter a day between 1 to 7 :");
    scanf("%d",&day);

    switch (day)
    {
    case 1 : printf("Monday");
            //  break;
    case 2 : printf("Tuesday");
             break;
    case 3 : printf("Wednesday");
             break;
    case 4 : printf("Thursday");
             break;
    case 5 : printf("Friday");
             break;
    case 6 : printf("Saturday");
             break;
    case 7 : printf("Sunday");
             break;
    default: printf("Default Value");
             break;
    }
    return 0;
}