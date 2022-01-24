#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int* arr;
};

void isFull(struct stack ptr){
    if (ptr.top == ptr.size - 1){
        printf("The stack is full");
    }

    else{
        printf("Not Full");
    }

}

void isEmpty(struct stack ptr){
    if (ptr.top == -1)
    {
        printf("It is empty");
    }

    else{
        printf("Not Empty");
    }
    
}

int main(int argc, char const *argv[])
{
    struct stack s;
    s.size = 80;
    s.top = -1;
    s.arr = (int*)malloc(s.size * sizeof(int));
    s.arr[0] = 2;
    s.top++;
    isEmpty(s);


    return 0;
}