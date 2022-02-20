#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

void postorderTraversal(struct Node* root){
    if (root != NULL){
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d",root->data);
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

    root->data = 4;
    root->left = left1;
    root->right = right1;

    left1->data = 1;
    left1->left = left2;
    left1->right = right2;

    right1->data = 6;
    right1->left = left3;
    right1->right = NULL;

    left2->data = 5;
    left2->left = NULL;
    left2->right = NULL;

    right2->data = 2;
    right2->left = NULL;
    right2->right = NULL;

    left3->data = 0;
    left3->left = NULL;
    left3->right = NULL;

    postorderTraversal(root);

    return 0;
}