#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int size;
} PriorityQueue;

void initialize(PriorityQueue* pq) {
    pq->size = 0;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapifyUp(PriorityQueue* pq, int index) {
    if (index && pq->data[(index - 1) / 2] < pq->data[index]) {
        swap(&pq->data[(index - 1) / 2], &pq->data[index]);
        heapifyUp(pq, (index - 1) / 2);
    }
}

void insert(PriorityQueue* pq, int element) {
    pq->data[pq->size++] = element;
    heapifyUp(pq, pq->size - 1);
}

void heapifyDown(PriorityQueue* pq, int index) {
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int largest = index;

    if (left < pq->size && pq->data[left] > pq->data[largest]) {
        largest = left;
    }

    if (right < pq->size && pq->data[right] > pq->data[largest]) {
        largest = right;
    }

    if (largest != index) {
        swap(&pq->data[index], &pq->data[largest]);
        heapifyDown(pq, largest);
    }
}

int extractMax(PriorityQueue* pq) {
    if (pq->size == 0) {
        printf("Priority Queue is empty\n");
        return -1;
    }

    int max = pq->data[0];
    pq->data[0] = pq->data[--pq->size];
    heapifyDown(pq, 0);
    
    return max;
}

void display(PriorityQueue* pq) {
    for (int i = 0; i < pq->size; i++) {
        printf("%d ", pq->data[i]);
    }
    printf("\n");
}

int main() {
    PriorityQueue pq;
    initialize(&pq);

    insert(&pq, 3);
    insert(&pq, 5);
    insert(&pq, 9);
    insert(&pq, 6);
    insert(&pq, 8);
    insert(&pq, 20);

    printf("Priority Queue: ");
    display(&pq);

    printf("Extracted Max: %d\n", extractMax(&pq));
    
    printf("Priority Queue after extraction: ");
    display(&pq);

    return 0;
}
