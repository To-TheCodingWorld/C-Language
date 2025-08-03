#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int arr[10];
	int top;
};

int isEmpty(struct stack *ptr)
{
	if(ptr->top==-1)
		return 1;
	else
		return 0;
}

int isFull(struct stack *ptr)
{
	if(ptr->top==9)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Push(struct stack *ptr, int ele)
{
	if(isFull(ptr))
	{
		printf("\nOverflow");
	}
	else
	{
		ptr->top+=1;
		ptr->arr[ptr->top]=ele;
	}
}

int Pop(struct stack *ptr)
{
	int ele=ptr->arr[ptr->top];
	ptr->top=1;
	return ele;
}

int Peek(struct stack *ptr)
{
	return ptr->arr[ptr->top];
}

void Display(struct stack *ptr)
{
	int i;
	if(isEmpty(ptr))
	{
		printf("\nUnderflow");
	}
	else
	{
		for(i=0;i<=ptr->top;i++)
		{
			printf("%d ",ptr->arr[i]);
		}
	}
}

int main()
{
	struct stack s;
	s.top=-1;
	if(isEmpty(&s))
	{
		printf("\nStack is Empty");
	}
	
	if(isFull(&s))
	{
		printf("\nStack is Full");
	}
	
	Push(&s,1);
	Push(&s,2);
	
	if(!isEmpty(&s))
	{
		printf("\nPopped element %d ",Pop(&s));
	}
	
	Display(&s);
}