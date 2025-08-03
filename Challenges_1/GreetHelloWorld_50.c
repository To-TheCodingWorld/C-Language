#include<stdio.h>
void greet();
int main()
{
    greet();
    greet();
    greet();

    return 0;
}

void greet(){
    printf("Hello World!\n");
}