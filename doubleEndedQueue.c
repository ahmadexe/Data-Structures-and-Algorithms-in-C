#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int front;
    int rear;
    int size;
    int* array;
};

int isFull(struct Queue* q){
    if (q->rear == q->size - 1) {
        return 1;
    }
    return 0;
}

int isEmpty(struct Queue* q){
    if (q->rear == q->front) {
        return 1;
    }
    return 0;
}

void enQueueFront(struct Queue* q, int val){
    if (q->front == -1) {
        printf("Can't add front from");
    }
    else{
        q->array[q->front] = val;
        q->front = q->front - 1;
    }
}

void enQueueRear(struct Queue* q, int val){
    if (isFull(q)) {
        printf("Can't add the array is Full");
    }
    else{
        q->rear = q->rear + 1;
        q->array[q->rear] = val;
    }
}

int deQueueFront(struct Queue* q)
{
    if (isEmpty(q)) {
        printf("Cant perform action");
        return -1;
    }
    else {
        q->front = q->front + 1;
        return q->array[q->front];
    }
}

int deQueueRear(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Can't perform function");
        return -1;
    }
    else {
        int temp = q->rear;
        q->rear = q->rear - 1;
        return q->array[temp];
    }
}

int main(int argc, char const *argv[])
{
    struct Queue* q;
    q->size = 4;
    q->front = -1;
    q->rear = -1;
    q->array = (int*)malloc(sizeof(int) * q->size);

    enQueueRear(q,10);
    enQueueRear(q,20);
    enQueueRear(q,30);
    enQueueRear(q,40);
    int a = deQueueFront(q);
    printf("%d\n",a);
    enQueueFront(q,100);
    printf("%d\n",deQueueFront(q));

    return 0;
}