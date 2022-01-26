#include <stdio.h>


void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {   
        int j = i-1;
        int key = array[i];

        while (j >= 0 && key < array[j])
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
        
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
}

int main(int argc, char const *argv[])
{
    int array[] = {12,7,64,52,1};
    insertionSort(array,5);
    printArray(array,5);
    return 0;
}