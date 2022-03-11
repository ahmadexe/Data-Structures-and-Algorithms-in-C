#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

void inorderTraversal(struct Node* root){
    if (root != NULL){
        inorderTraversal(root->left);
        printf("%d",root->data);
        inorderTraversal(root->right);
    }
}


int main(int argc, char const *argv[])
{
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    struct Node* left1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* right1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* left2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* right2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* left3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* right3 = (struct Node*)malloc(sizeof(struct Node));
    
    root->data = 4;
    root->left = left1;
    root->right = right1;
    left1->data = 1;
    left1->left = left2;
    left1->right = right2;
    right1->data = 6;
    right1->left = NULL;
    right1->right = right3;
    left2->data = 5;
    left2->left = NULL;
    left2->right = NULL;
    right2->data = 2;
    right2->left = NULL;
    right2->right = NULL;
    right3->data = 0;
    right3->left = NULL;
    right3->right = NULL;
    inorderTraversal(root);

    return 0;
}