#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int rear=-1;
int front=-1;
 
void enqueue(int value)
{
    if(rear==size-1)
        printf("Queue is Full");
    else 
    {
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=value;
        printf("\nInserted : %d", value);
    }
}

void dequeue()
{
    if(front==-1)
        printf("\nQueue is empty!");
    else
    {
        printf("\nDeleted item : %d",queue[front]);
        front++;
        if(front>rear)
            front=rear=-1;
    }
}

void display()
{
    if(rear==-1)
    {
        printf("Queue is empty!");
    }
    else
    {
        int i ;
        printf("\nQueues elements are : ");
        for(i=front;i<=rear;i++)
        {
            printf("\n%d",queue[i]);
        }
    }
    printf("\n");
}

int main()
{
    enqueue(55);
    enqueue(23);
    enqueue(77);
    enqueue(99);
    display();
    dequeue();
    display();
    return 0;
}

