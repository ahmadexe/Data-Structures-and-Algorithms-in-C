#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* find(struct Node* root, int key){
    if (!root){
        return NULL;
    }
    else{
        if (key > root->data){
            return find(root->right, key);
        }
        else if (key < root->data){
            return find(root->left, key);
        }
        else if (key == root->data){
            return root;
        }
    }
}

int main(int argc, char const *argv[])
{

    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p1L = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p1R = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p2L = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p2R = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p3L = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p3R = (struct Node*)malloc(sizeof(struct Node));
    struct Node* newL = (struct Node*)malloc(sizeof(struct Node));
    struct Node* newR = (struct Node*)malloc(sizeof(struct Node));

    root->data = 15;
    root->left = p1L;
    root->right = p1R;

    p1L->data = 10;
    p1L->left = p2L;
    p1L->right = p2R;

    p1R->data = 17;
    p1R->left = newL;
    p1R->right = newR;

    newL->data = 16;
    newL->left = NULL;
    newL->right = NULL;

    newR->data = 20;
    newR->left = NULL;
    newR->right = NULL;

    p2L->data = 7;
    p2L->right = NULL;
    p2L->left = NULL;

    p2R->data = 11;
    p2R->left = NULL;
    p2R->right = NULL;

    struct Node* x = find(root,7);
    if (x)
        printf("%d",x->data);
    else   
        printf("Element not found");
    return 0;
}