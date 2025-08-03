#include<stdio.h>
#include<stdlib.h>

#define Max 5

int stack[Max];
int first=-1;

void push(int data)
{
    int i;
    first =+ 1;
    for(i=first;i>0;i--){
        stack[i] = stack[i-1];
    }
    stack[0]=data;     
}

void print(){
     if(first == -1){
        printf("Stack underflow!");
        return;
    }
    for(int i=0;i<=first;i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}

int main()
{
    printf("Welcome to the stack..\n");
    push(25);
    push(36);
    push(44);
    push(20);
    push(33);
    print();
    return 0;
}