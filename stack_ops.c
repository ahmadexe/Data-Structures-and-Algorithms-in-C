#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int* arr;
};

void isFull(struct stack* ptr){
    if (ptr->top == ptr->size - 1){
        printf("The stack is full");
    }

    else{
        printf("Not Full");
    }
}
void isEmpty(struct stack* ptr){
    if (ptr->top == -1)
    {
        printf("It is empty");
    }

    else{
        printf("Not Empty");
    }   
}
void push(struct stack* ptr, int val){
    if (ptr->top == ptr->size - 1){
        printf("Stack Overflow! Cant push %d\n",val);
    }

    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int Pop(struct stack* ptr){
    if (ptr->top == -1){
        printf("Stack Underflow! Can't Pop\n");
        return -1;    
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }    
}

int main(int argc, char const *argv[])
{
    struct stack* s;
    s->size = 10;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));
    // push(s, 2135);
    // push(s, 543);
    // push(s, 53);
    // push(s, 25);
    // push(s, 15);
    // push(s, 425);
    // push(s, 425);

    // push(s, 31245);
    // push(s, 25);
    push(s, 5);

    // isEmpty(s);
    printf("%d\n",Pop(s));
    // printf("%d\n",Pop(s));

    


    return 0;
}