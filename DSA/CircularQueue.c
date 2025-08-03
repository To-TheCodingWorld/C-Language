#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct {
    int items[SIZE];
    int front, rear;
} CircularQueue;

void initialize(CircularQueue *q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(CircularQueue *q) {
    if ((q->front == 0 && q->rear == SIZE - 1) || (q->rear == (q->front - 1) % (SIZE - 1))) {
        return 1;
    }
    return 0;
}

int isEmpty(CircularQueue *q) {
    if (q->front == -1) {
        return 1;
    }
    return 0;
}

void enqueue(CircularQueue *q, int value) {
    if (isFull(q)) {
        printf("\nQueue is Full!!");
        return;
    } else {
        if (q->front == -1) {
            q->front = 0;
        }
        q->rear = (q->rear + 1) % SIZE;
        q->items[q->rear] = value;
        printf("\nInserted -> %d", value);
    }
}

int dequeue(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("\nQueue is Empty!!");
        return -1;
    }

    int item = q->items[q->front];
    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % SIZE;
    }
    return item;
}

void display(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("\nQueue is Empty!!");
        return;
    }

    printf("\nFront -> %d", q->front);
    printf("\nItems -> ");
    int i;
    for (i = q->front; i != q->rear; i = (i + 1) % SIZE) {
        printf("%d ", q->items[i]);
    }
    printf("%d ", q->items[i]);
    printf("\nRear -> %d", q->rear);
}

int main() {
    CircularQueue q;
    initialize(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);

    display(&q);

    printf("\nDeleted value = %d", dequeue(&q));
    printf("\nDeleted value = %d", dequeue(&q));

    display(&q);

    enqueue(&q, 6);
    enqueue(&q, 7);

    display(&q);

    return 0;
}
