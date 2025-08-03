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

void prime_fact(int num){
    int i = 2;
    while (num != -1){
        while(num%i == 0){
            push(i);
            num=num/i;
        }
        i++;
    }

    printf("Prime factor of the number in descending order are : ");
    while(top != -1){
        printf("%d",pop());
    }
}



int main()
{   
    int number;
    printf("Please enter the number : ");
    scanf("%d",&number);

    prime_fact(number);

     return 0;
}