#include <stdio.h>


int BinarySearch(int arr[], int size, int element){

    int low,mid,high;
    low = 0;
    high = size -1;

    while(low<=high)
    {
        mid = (high+low)/2;
        if(arr[mid] == element){
            return mid;
        }

        else if(arr[mid] < element){
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }
    return -1;

}

int main(int argc, char const *argv[])
{
    int myarr[] = {12,43,54,67,87,90,123,145,167,189,200};
    int size = sizeof(myarr)/sizeof(int);
    int element = 123;

    int index = BinarySearch(myarr,size,element);

    printf("The index is %d, ",index);

    return 0;
}