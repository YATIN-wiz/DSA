#include <stdio.h>
#include <stdlib.h>


int binary_search(int arr[], int size, int key)
{
    int lower , upper, mid;
    lower = 0;
    upper = size - 1;
    while(lower <= upper)
    {
        mid = (lower + upper)/2;
        if(arr[mid] < key)
            lower = mid + 1;
        else if (arr[mid] > key)
            upper = mid - 1;
        else
            return mid;
    }

    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,11,32,23};
    int size = 12;
    int key = 5;
    int index = binary_search(arr, size ,key);
    if(index != -1)
        printf("%d is found at %d \n", key, index);
    else
        printf("%d not found!!", key);

    return 0;

}


