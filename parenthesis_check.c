#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char* arr;
};

int isEmpty(struct stack* s){
    if (s->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack* s){
    if (s->top == s->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack* s, char value){
    if (isFull(s) == 1){
        printf("Stack overflow! Can't push.");
    }
    else{
        s->top++;
        s->arr[s->top] = value;
    }
}

char pop(struct stack* s){
    if (isEmpty(s) == 1){
        printf("Stack Underflow! Can't pop.\n");
        return -1;
    }
    else{
        int val = s->arr[s->top];
        s->top--;        
        return val;
    }
}

int parenthesisCheck(char *c){
    struct stack* s;
    s->size = 100;
    s->top = -1;
    s->arr = (char*)malloc(s->size * sizeof(s->arr));
    for (int i = 0; c[i] != '\0'; i++)
    {   
        if (c[i] == '('){
            push(s,'(');
        }
        else if (c[i] == ')'){
            if(isEmpty(s)){
                return 0;
            }
            pop(s);
        }
    }
    if (isEmpty(s)){
        return 1;
    }
    else{
    return 0;
    }
}

int main(int argc, char const *argv[])
{
    // struct stack myStack;
    // myStack.size = 10;
    // myStack.top = -1;
    // myStack.arr = (char*)malloc(myStack.size * sizeof(char));
    // int val = isEmpty(myStack);
    //printf("%d",val);
    // myStack.arr[0] = 3;
    // myStack.top++;
    // push(myStack, '3');
    // myStack.top++;

    // char popval = pop(myStack);
    // printf("%c",popval);
    // push(myStack,'(');
  
    // push(myStack,')');
    //myStack.top++;
    // char* ch = "(3 + (9*10)";
    // int parval = parenthesisCheck(ch);
    // if (parval){
    //     printf("Parenthesis are okay");
    // }
    // else{
    //     printf("BAD Parenthesis error.");
    // }

    printf("%d\n", sizeof(struct stack));
    printf("%d", sizeof(struct stack*));
    return 0;
}