#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

//Traversal the linked List (For Counting):
void count_of_nodes(struct node *head)
{
    int count = 0;
    if(head==NULL)
        printf(" Linked list is empty!");
    struct node *ptr = NULL;
    ptr=head;
    while(ptr !=NULL){
        count++;
        ptr=ptr->link;
    }
    printf("The Total nodes are : %d",count);
}


// Print the data :
void print_data(struct node *head){
    if(head==NULL)
        printf("The linked is empty!");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr!=NULL){
        printf("%d \n", ptr->data);
        ptr= ptr->link;
    }
}

// Insert a node at the End of the linked list.
void add_at_end(struct node *head,int data){
    struct node *ptr , *temp;
    ptr=head;
    temp =  (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr= ptr->link;
    }
    ptr->link=temp;
}

// Insert a node at the beginning.
void add_at_beg(struct node *head,int data){
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=NULL;

    ptr->link=head;
    head=ptr;
    print_data(head);   
}

void add_at_pos(struct node *head , int data , int pos){
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data=data;
    ptr2->link=NULL;

    pos--;
    while(pos !=1){
        ptr=ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link=ptr2;
}

//Main Function :
int main()
{
    struct node *head= malloc(sizeof(struct node));
    head->data= 45;
    head->link=NULL;

    struct node *current= malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link =current;

    struct node *current2 = malloc(sizeof(struct node));
    current2->data=3;
    current2->link = NULL;
    current->link=current2;

    add_at_pos(head,77,3);
    add_at_end(head ,12); // Insert a node at the end.
    count_of_nodes(head); //Traversal the node.
    printf("\n");
    print_data(head);  // Print the linked list.
    printf("\n");
    // add_at_beg(head,55); //Insert a node at the Beginning.
    
    return 0;
}