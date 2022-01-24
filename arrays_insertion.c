#include <stdio.h>

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    
};

void sortedInsertion(int arr[], int element, int indexofinsertion, int sizeofarray, int capacityofarray){

    if(sizeofarray >= capacityofarray){
        printf("Can't insert the element");
    }
    else{
        for (int i = sizeofarray-1; i >= indexofinsertion; i--)
        {
            arr[i+1] = arr[i];
        }
        
    }

    arr[indexofinsertion] = element;
    
    printf("Task completed\n");
};

int main(int argc, char const *argv[])
{
    int arr[100] = {7,8,12,27,88};
    int size = 5;
    int element = 45;
    int index = 4;
    sortedInsertion(arr,element,index,size,100);
    size += 1;
    display(arr,size);


    return 0;
}