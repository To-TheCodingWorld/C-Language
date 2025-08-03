#include<stdio.h>
#include<stdlib.h>
#define Max 50

int stack_arr[Max];
int top = -1;

int isFull(){
    if(top==(Max-1))
        return 1;
    else 
        return 0;
}

int isEmpty(){
    if(top == -1)
        return 1;
    else
        return 0;
}

void push(int data)
{
   if(isFull()){
       printf("Stack is overflow!");
       exit(1);
   }
   top++;
   stack_arr[top]=data;
    
}

int pop(){
    int value;
    if(isEmpty()){
        printf("Stack is underflow!");
        exit(1);
    } 
     value = stack_arr[top];
     top--;
     return value;
}

void dec2bin(int n){
    while(n != 0){
        push(n%2);
        n=n/2;
    }
}

void print()
{
    if(isEmpty()){
        printf("Stack underflow\n");
        exit(1);
    }
    while(!isEmpty()){
        printf("%d",pop());
    }
}



int main()
{   
   long dec;
    printf("Please enter the decimal number : ");
    scanf("%d",&dec);

    dec2bin(dec);
    print();

     return 0;
}
