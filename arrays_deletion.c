#include <stdio.h>


void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    
};

void deletion(int arr[],int index, int size){
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    

}

int main(int argc, char const *argv[])
{
    
    int arr[] = {0,1,2,3,4,5};

    int index = 2;
    int size = 6;

    deletion(arr,index,size);
    size = size - 1;
    display(arr,size);


    return 0;
}