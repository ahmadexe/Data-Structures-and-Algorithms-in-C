#include <stdio.h>
#include <stdlib.h>

struct Node{

    int data;
    char* name;
    struct Node* next;

};

void marksCheck(struct Node* head){
    int AGrades = 0;
    int BGrades = 0;

    while (head != NULL)
    {
        if (head->data >= 85){
            printf("%s has A grade\n",head->name);
            AGrades++;
            head = head->next;
        }
        else if (head->data < 85 && head->data > 70){
            printf("%s has B grade\n", head->name);
            BGrades++;
            head = head->next;
        }
        else{
            head = head->next;
        }
    }
    printf("Total A grade: %d\n",AGrades);
    printf("Total B grade: %d\n",BGrades);    
}

int main(int argc, char const *argv[])
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* tail = (struct Node*)malloc(sizeof(struct Node));

    head->name = "Ahmad";
    head->data = 100;
    head->next = second;

    second->name = "Qasim";
    second->data = 99;
    second->next = third;

    third->name = "Ali";
    third->data = 75;
    third->next = tail;

    tail->name = "XYZ";
    tail->data = 72;
    tail->next = NULL;

    marksCheck(head);   

    return 0;
}