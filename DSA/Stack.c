#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack_arr[MAX];
int top = -1;

void push(int data)
{
    if(top == (MAX-1)){
        printf("Stack overflow\n");
        return ;
    }
    top = top+1;
    stack_arr[top]= data;
}

int pop()
{
    int value;
    if(top== -1){
        printf("Stack is underflow\n");
        exit(1);
    }
    value = stack_arr[top];
    top=top-1;
    return value;
}

void print()
{
    if(top == -1){
        printf("Stack underflow\n");
        return;
    }
    for(int i = top;i>=0;i--){
        printf("%d ",stack_arr[i]);
    }
    printf("\n");
}

int main()
{
    int data;
    push(4);
    push(6);
    push(8);
    push(10);
    push(12);
    data = pop();
    data = pop();
    print();
    return 0;
}