#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;

    struct Node* next;

};

void linkedlist_display(struct Node* node){
    while(node != NULL){
        printf("%d\n",node->data);
        node = node->next;
    }
};


struct Node* insertatfirst(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;

    return ptr;
};

void insertatindex(struct Node* head, int data, int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;

    while (i != index-1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    


};


void insertatend(struct Node* node, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));

    while (node->next != NULL)
    {
        node = node->next;
    }

    node->next = ptr;
    ptr->data = data;
    ptr->next = NULL;
    
};


void inserafteranode(struct Node* node, int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->next = node->next;
    node->next = newNode;
    newNode->data = data;

}


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

    // head = insertatfirst(head, 90);

    // insertatindex(head, 100, 2);
    // insertatend(head,70);
    
    inserafteranode(second, 1000);
    linkedlist_display(head);
    

    return 0;
}