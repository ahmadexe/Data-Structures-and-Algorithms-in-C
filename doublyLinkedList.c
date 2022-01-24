#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* previous;
    struct Node* next;
};

void printList(struct Node* head){
    while (head != NULL)
    {
        printf("%d",head->data);
        head = head->next;
    } 
}

void insertAtIndex(struct Node* head, int index, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    //struct Node* p = head;
    int i = 0;
    while (i != index-1)
    {
        head = head->next;
        i++;
    }
    ptr->data = data;
    ptr->next = head->next;
    head->next = ptr;  
    ptr->previous = head;
}

struct Node* insertAtHead(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    head->previous = ptr;
    ptr->data = data;
    ptr->next = head;
    ptr->previous = NULL;    
    return ptr;
}

void insertAtEnd(struct Node* end, int data){

}


int main(int argc, char const *argv[])
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* tail = (struct Node*)malloc(sizeof(struct Node));
    
    head->previous = NULL;
    head->data = 10;
    head->next = second;

    second->previous = head;
    second->data = 20;
    second->next = third;

    third->previous = second;
    third->data = 30;
    third->next = tail;

    tail->previous = third;
    tail->data = 40;
    tail->next = NULL;

    insertAtIndex(head, 2, 999);
    // printList(head);

    // printf("\n%d",sizeof(struct Node));
    // printf("\n%d",sizeof(struct Node*));
    // printf("\n%d",sizeof(head->data));
    // printf("\n%d",sizeof(head->next));
    // printf("\n%d\n",sizeof(head->previous));

    // head = insertAtHead(head, 700);
    printList(head);

    return 0;
}