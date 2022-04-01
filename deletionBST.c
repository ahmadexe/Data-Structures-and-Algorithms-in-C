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
        printf("%d ",root->data);
        inorderTraversal(root->right);
    }
}

struct Node* preD(struct Node* root)
{
    if (root == NULL)
    {
        return NULL;
    }
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct Node* deleteNode(struct Node* root, int value)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->right == NULL && root->left == NULL){
        free(root);
        return NULL;
    }
    else if (root->data < value)
    {
        root->right = deleteNode(root->right, value);
    }
    else if (root->data > value)
    {
        root->left = deleteNode(root->left, value);
    }
    else{
        struct Node* iPre = preD(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, value);
    }
    return root;
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

    inorderTraversal(root);
    deleteNode(root, 15);
    printf("\n");
    inorderTraversal(root);
    return 0;
}