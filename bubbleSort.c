#include <stdio.h>

void bubbleSort(int array[], int size)
{
    int count = 0;

    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                count += 1;
            }
        }
        if (count == 0)
        {
            break;
        }
        size = size - 1;
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
    int array[] = {3, 4, 1, 2};
    bubbleSort(array, 4);
    printArray(array, 4);
    return 0;
}