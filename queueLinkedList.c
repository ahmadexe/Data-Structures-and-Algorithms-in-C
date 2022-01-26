#include <stdio.h>
#include <stdlib.h>



struct Node *front = NULL;
struct Node *rear = NULL;

struct Node
{
    int data;
    struct Node *next;
};


void enQueue(int val)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

int deQueue()
{
    struct Node* temp = front; 
    if (front == NULL) {
        return -1;
    }
    if (front == rear) {
        //return front->data;
        front = rear = NULL;
    }
    else{
        front = front->next;
        int store = temp->data;
        free(temp);
        return store;
    }

}

void printLinkedList(){
    struct Node* node = front;
    while (node != NULL)
    {
        printf("%d", node->data);
        node = node->next;
    }
    
}

int main(int argc, char const *argv[])
{
    
    enQueue(10);
    enQueue(20);
    enQueue(30);
    printLinkedList();   
    printf("%d\n",deQueue());
    printf("%d\n",deQueue());

    printf("%d\n",deQueue());
    printf("%d",deQueue());

    return 0;
}