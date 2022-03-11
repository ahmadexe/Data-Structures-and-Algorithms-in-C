#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
int arr[5];
int i = 0;
void inorderTraversal(struct Node* root){
    if (root != NULL){
        inorderTraversal(root->left);
        arr[i] = root->data;
        i++;
        printf("%d, ",root->data);
        inorderTraversal(root->right);
    }
}

int BSTcheck(int arr[]){
    int j = 1;
    int i = 0;
    int check = 1;
    while (j < 5){
        if (arr[i] > arr[j]){
            check = 0;
            break;
        }
        i++;
        j++;
    }
    return check;
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

/*
        7
      /  \
     5    8
    / \
   4   6  
*/

/*
        15
      /  \
     10    17
    / \    / \
   7   11  0  20
*/

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

    newL->data = 0;
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
    printf("\n");
    printf("\n%d",BSTcheck(arr));
    return 0;
}