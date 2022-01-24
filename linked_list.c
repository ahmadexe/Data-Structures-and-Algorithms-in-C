#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;

    struct Node* next;

};

void linkedlist_display(struct Node* node){
    while(node != NULL){
        printf("%d",node->data);
        node = node->next;
    }
};

int main(int argc, char const *argv[])
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 5;
    third->next = fourth;

    fourth->data = 7;
    fourth->next = NULL;

    linkedlist_display(head);

    return 0;
}