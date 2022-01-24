#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void delValue(struct Node* head, int val)
{
    struct Node* p = head;
    struct Node* q = head->next;

    while(q->data != val)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);

}

void print(struct Node* head)
{

    while (head->next != NULL)
    {
        printf("%d\n",head->data);
        head = head->next;
    }
    struct Node* q = head;

    printf("%d",q->data);

}

int main(int argc, char const *argv[])
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* val1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* val2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* tail = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = val1;

    val1->data = 20;
    val1->next = val2;

    val2->data = 30;
    val2->next = tail;

    tail->data = 40;
    tail->next = NULL;


    print(head);
    delValue(head, 20);
    print(head);
    return 0;
}