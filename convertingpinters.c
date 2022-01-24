#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int size = 5;
    int* arr;
    arr = (int*)malloc(size * sizeof(int));
    arr[0] = 1;
    arr[1] = 2;

    printf("%d, %d", arr[0], arr[1]);
    return 0;
}