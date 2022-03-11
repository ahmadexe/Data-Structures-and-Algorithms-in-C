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
        printf("%d",root->data);
        inorderTraversal(root->right);
    }
}

int BSTcheck(int arr[]){
    int j = 1;
    int i = 0;
    int check = 1;
    while (j < 5){
        printf("run");

        if (arr[i] > arr[j]){
            check = 0;
            break;
        }
        i++;
        j++;
    }
    return check;
}

int check(struct Node* root){
    
    if (root->left == NULL && root->right == NULL){
        printf("run");
        return 1;
    }

    if ((root->data > root->left->data && root->data < root->right->data) && (check(root->left)) && (check(root->right))){
        printf("run");
        
        return 1;
    }

    else{
        printf("run");

        return 0;
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

/*
        7
      /  \
     5    8
    / \
   4   6  
*/
    
    root->data = 7;
    root->left = p1L;
    root->right = p1R;

    p1L->data = 5;
    p1L->left = p2L;
    p1L->right = p2R;

    p1R->data = 8;
    p1R->left = NULL;
    p1R->right = NULL;

    p2L->data = 4;
    p2L->right = NULL;
    p2L->left = NULL;

    p2R->data = 6;
    p2R->left = NULL;
    p2R->right = NULL;
 
    inorderTraversal(root);
    printf("\n");
    printf("\n%d\n",check(root));
    printf("\n%d",BSTcheck(arr));
    return 0;
}