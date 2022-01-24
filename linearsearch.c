#include <stdio.h>

int LinearSearch(int arr[],int size, int element){
    for (int i = 0; i <= size; i++)
    {   
        if(arr[i] == element){
        return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int marks[] = {23,435,56,76,87,8,9,43,4,65,78,89};
    int size = sizeof(marks)/sizeof(int);
    int element = 65;
    int searchindex = LinearSearch(marks,size,element);
    printf("The index of %d is %d",element,searchindex);
    return 0;
}