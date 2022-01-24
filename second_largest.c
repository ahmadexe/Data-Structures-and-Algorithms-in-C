#include <stdio.h>


int main(int argc, char const *argv[])
{
    int largest = 0;
    int second_largest = 0;

    int arr[] = {12,34,1,43,65,76,89,89};

    for(int i = 0; i<7; i++){
        if (arr[i] > largest){
            second_largest = largest;
            largest = arr[i];

        }
        else if(arr[i]>second_largest && arr[i] != largest){
            second_largest = arr[i];
        }
    }

    printf("%d",second_largest);
    return 0;
}