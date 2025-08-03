#include <stdio.h>
#include <stdlib.h>

// Define a Node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;  // Global top pointer for the stack

// Push operation to add an element to the stack
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Stack Overflow! Memory allocation failed.\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("Pushed : %d \n", value);
}

// Pop operation to remove the top element from the stack
void pop() {
    if (top == NULL) {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
        return;
    }
    struct Node* temp = top;
    printf("Popped : %d \n", temp->data);
    top = top->next;
    free(temp);
}

// Peek operation to view the top element
void peek() {
    if (top == NULL) {
        printf("Stack is empty. Nothing to peek.\n");
        return;
    }
    printf("Top element is : %d\n", top->data);
}

// Main function to demonstrate stack operations
int main() {
    push(10);
    push(20);
    push(30);

    peek();  // Check the top element

    pop();   // Remove the top element
    peek();  // Check the new top element

    pop();
    pop();
    pop();   // Demonstrate stack underflow

    return 0;
}