#include<stdio.h>
int main() {
    int a=5;
    int b=7;

    int temp = a;
    a=b;
    b=temp;

    printf("Swapping is : a=%d , b=%d",a,b);
    return 0;
}