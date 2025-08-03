#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* link;
};

int main()
{
	int data;
	struct node* head =malloc(sizeof(struct node));
	head->data=36;
	head->link= NULL;

	struct node* temp= malloc(sizeof(struct node));
	temp->data=45;
	temp->link = NULL;

	head->link = temp;

	struct node* temp2=malloc(sizeof(struct node));
	temp2->data= 96;
	temp2->link= NULL;

	head->link->link= temp;

	struct node* ptr=NULL;
	ptr=head;
	while(ptr != NULL)
	{
		printf("%d",ptr->data);
		ptr = ptr->link;
	}
	return 0;
	
}