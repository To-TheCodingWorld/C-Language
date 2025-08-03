#include<stdio.h>
#include<limits.h>
int main(){
    unsigned int num1=UINT_MAX;
    int num2 = INT_MAX;

    printf("The unsigned value is : %u\n",num1);
    printf("The simple value is : %d\n",num2);

    num1++;
    num2++;
    printf("The unsigned value is : %u\n",num1);
    printf("The simple value is : %d\n ",num2);

    return 0;
}