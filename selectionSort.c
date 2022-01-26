#include <stdio.h>

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[j] < array[i])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
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

    int array[] = {2,52,1,32,24};
    selectionSort(array, 5);
    printArray(array, 5);
    
    return 0;
}