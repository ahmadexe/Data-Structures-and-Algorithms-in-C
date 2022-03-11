#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l + 1;
    int j = h;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i >= j)
        {
            break;
        }
        else
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    } while (i < j);

    int temp = arr[l];
    arr[l] = arr[j];
    arr[j] = temp;

    return j;
}

void quickSort(int arr[], int l, int h)
{
    if (l >= h)
    {
        return;
    }
    int pivot = partition(arr, l, h);
    quickSort(arr, l, pivot - 1);
    quickSort(arr, pivot + 1, h);
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
    int arr[] = {-3, -5, 2, 13, 12};
    quickSort(arr, 0, 4);
    printArray(arr, 5);
    return 0;
}