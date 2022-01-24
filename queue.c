#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int firstIndex;
    int backIndex;
    int size;
    int* arr;
};

int isEmpty(struct Queue* q)
{
    if (q->firstIndex == q->backIndex)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Queue* q)
{
    if (q->backIndex == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void inQueue(struct Queue* q, int val)
{
    if (isFull(q))
    {
        printf("Queue overFlow");
    }
    else
    {
        q->backIndex = q->backIndex + 1;
        q->arr[q->backIndex] = val;
    }
}

void printQueue(struct Queue* q)
{
    for (int i = 0; i < q->size; i++)
    {
        printf("%d\n",q->arr[i]);
    }
}

int deQueue(struct Queue* q)
{
    if (isEmpty(q))
    {
        printf("Queue underflow");
    }
    else
    {
        int a;
        q->firstIndex = q->firstIndex + 1;
        a = q->arr[q->firstIndex];
        return a;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    struct Queue* q;
    q->firstIndex = -1;
    q->backIndex = -1;
    q->size = 3;
    q->arr = (int*)malloc(sizeof(int) * q->size);
    
    inQueue(q, 5);
    inQueue(q, 6);
    inQueue(q, 7);
    printQueue(q);   
    printf("%d\n",q->backIndex);
    printf("%d\n",isFull(q));
    //inQueue(q, 8);
    printf("Dequeing\n");
    printf("%d\n",deQueue(q));
    printf("%d\n",deQueue(q));
    printf("%d\n",deQueue(q));
    printf("%d\n",isEmpty(q));
    return 0;
}