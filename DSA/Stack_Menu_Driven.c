#include<stdio.h>
#include<stdlib.h>

#define Max 5
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
       return;
   }
   top = top +1;
   stack_arr[top]=data;
    
}

int pop(){
    int value;
    if(isEmpty()){
        printf("Stack is underflow!");
        exit(1);
    } 
     value = stack_arr[top];
     top = top-1;
     return value;
}

int peek(){
    if(isEmpty()){
        printf("Stack is underflow!");
        return ;
    }
    return stack_arr[top];
}

void display()
{
    if(top == -1){
        printf("Stack underflow\n");
        return;
    }
    printf("The display values are : ");
    for(int i = top;i>=0;i--){
        printf("%d ",stack_arr[i]);
    }
    printf("\n");
}

int main()
{   
    int choice , data , num;
    printf("Welcome to the Stack menu driven Program..\n");

    while(1)
    {   
        printf("Stack Menu\n");
        printf("1.Push operation : \n");
        printf("2.Pop operation : \n");
        printf("3.Display operation : \n");
        printf("4.Peek Operation : \n");
        printf("5.exit : \n");
        printf("Please enter the choice : ");
        scanf("%d",&choice);
        
     switch(choice)
     {
        case 1 :
                printf("Enter the push value : ");
                scanf("%d",&data);
                push(data);
                break;
        case 2 :
               num =  pop();
               printf("The deleted element is : %d\n",num);
                break;

        case 3 :display();
                break;

        case 4:printf("The top most element is : %d\n",peek());
                break;

        case 5 : printf("we are exited.......\n");
                exit(1);
                break;

        default : printf("Invalid Option!...Try Again\n");
                    break;
      }
    }
     return 0;
}