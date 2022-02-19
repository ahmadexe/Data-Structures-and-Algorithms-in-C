#include <stdio.h>
#include <stdlib.h>

struct ArrayList{
  int startIndex;
  int lastIndex;
  int size;
  int* arr;  
};

int isEmpty(struct ArrayList* al){
    if (al->lastIndex == -1 && al->startIndex == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct ArrayList* al){
    if (al->startIndex == 0 && al->lastIndex == al->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void insertAtEnd(struct ArrayList* al, int value){
    
    if (isFull(al)){
        printf("Can't add, array list is full\n");
    }

    else if (isEmpty(al)){
        //printf("Step 1");
        al->startIndex += 1;
        al->lastIndex += 1;
        al->arr[al->lastIndex] = value;
    }

    else if (al->lastIndex == al->size-1 && al->startIndex != 0){
        // printf("%d\n",al->lastIndex);
        // printf("%d\n",al->size);

        int x = al->startIndex;
        int y = x-1;
        while (x <= al->lastIndex){
            al->arr[y] = al->arr[x];
            x++;
            y++;
        }
        al->startIndex--;
        al->arr[al->lastIndex] = value;
        // if (isFull(al)){
        //     printf("Can't add, array list is full");
        // }
    }

    else{
        al->lastIndex += 1;
        al->arr[al->lastIndex] = value;
    }
}

void printArrayList(struct ArrayList* al){
    if (isEmpty(al)){
        printf("Nothing to print, empty array List\n");
    }
    else{
        for (int i = al->startIndex; i <= al->lastIndex; i++){
            printf("%d\n",al->arr[i]);
        }
    }
}

int removeEnd(struct ArrayList* al){
    if (isEmpty(al)){
        return -1;
    }

    else {
        int value = al->arr[al->lastIndex];
        al->arr[al->lastIndex] = 0;
        al->lastIndex--;
        return value;
    }
}

int removeStart(struct ArrayList* al){
    if (isEmpty(al)){
        return -1;
    }
    else{
        int value = al->arr[al->startIndex];
        al->arr[al->startIndex] = 0;        
        al->startIndex++;
        return value;
    }
}



int main(int argc, char const *argv[])
{
    struct ArrayList* arrayList;
    arrayList->lastIndex = -1;
    arrayList->startIndex = -1;
    arrayList->size = 5;
    arrayList->arr = (int*)malloc(sizeof(int) * arrayList->size);

    insertAtEnd(arrayList, 10);
    insertAtEnd(arrayList, 20);
    insertAtEnd(arrayList, 30);
    insertAtEnd(arrayList, 40);
    insertAtEnd(arrayList, 50);
    // printf("%d\n",removeEnd(arrayList));
    removeStart(arrayList);
    insertAtEnd(arrayList, 60);
    insertAtEnd(arrayList, 70);
    printArrayList(arrayList);
    // int x = removeStart(arrayList);
    // insertAtEnd(arrayList, 60);
    // insertAtEnd(arrayList, 70);
    // printArrayList(arrayList);
    // printf("%d\n",removeStart(arrayList));
    // printf("%d",isFull(arrayList));
    // printf("%d\n",removeStart(arrayList));
    // printf("%d\n",removeStart(arrayList));

    


    return 0;
}