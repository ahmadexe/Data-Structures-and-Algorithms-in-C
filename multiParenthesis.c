#include <stdio.h>
#include <stdlib.h>

struct stack
{
    char* array;
    int top;
    int size;
};

int isEmpty(struct stack* myStack){
    if (myStack->top == -1){
        return 1;
    }
    return 0;
}

int isFull(struct stack* myStack){
    if (myStack->top == myStack->size - 1){
        return 1;
    }
    return 0;
}

void push(struct stack* myStack, char character){
    if (isFull(myStack)){
        printf("Stack Overflow! can't push");
    }
    else{
        myStack->top++;
        myStack->array[myStack->top] = character;
        //printf("Push Successful.");
    }
}

char pop(struct stack* myStack){
    if (isEmpty(myStack)){
        printf("Stack undeflow! Can't pop.");
        return -1;
    }
    char popped = myStack->array[myStack->top];
    myStack->top--;
    return popped;
}

int match(char a, char b){
    if (a == '(' && b == ')'){
        return 1;
    }

    if (a == '{' && b == '}'){
        return 1;
    }

     if (a == '[' && b == ']'){
        return 1;
    }

    return 0;
}

int parenthesisCheck(char* exp){
    struct stack* myStack;
    myStack->size = 999;
    myStack->top = -1;
    myStack->array = (char*)malloc(myStack->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if ((exp[i] == '(') || (exp[i] == '{') || (exp[i] == '[')){
            push(myStack, exp[i]);
        }
        else if((exp[i] == ')') || (exp[i] == '}') || (exp[i] == ']')){
            char popped = pop(myStack);
            if (!match(popped, exp[i])){
                return 0;
            }    
        }

    }

    if (isEmpty(myStack)){
        return 1;
    }
    return 0;

}


int main(int argc, char const *argv[])
{
    char* exp = "[30 - {20(10+10) - 10}] - [2121 - (32 * 32]";
    int xyz = parenthesisCheck(exp);
    if (xyz){
        printf("OK");
    }
    else{
        printf("Not ok.");
    }
    return 0;
}