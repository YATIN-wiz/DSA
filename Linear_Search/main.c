#include <stdio.h>
#include <stdlib.h>

int linear_search(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,0,1,7,5,4,3};
    int size = 15;
    int key = 5;
    int index = linear_search(arr,15,key);
    if(index != -1)
        printf("%d is found at %d \n", key, index);
    else
        printf("%d not found!!", key);

    return 0;

}
