#include <stdio.h>
#include <stdlib.h>


int binary_search( int arr[],int size, int key,int lower, int upper)
{
    int mid;
    /*int arr[] = {1,2,3,4,5,6,7,8,9,11,32,23};
    int size = 12;
    int key = 2;*/
   // lower = 0;
   // upper = size ;

    if(lower <= upper)
    {
        mid = (lower + upper)/2;
        if(arr[mid] < key)
        {

            binary_search( arr, 12, key, mid + 1,upper);
        }
        else if (arr[mid] > key)
         {

             binary_search( arr , 12, key, lower, mid - 1);
         }
        else
            return mid;
    }
    else
        return -1;


}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,11,32,23};
    int size = 12;
    int key = 23;
    int lower = 0;
    int upper = size ;
    int index = binary_search(arr, size ,key, lower,upper );
    if(index != -1)
        printf("%d is found at %d \n", key, index);
    else
        printf("%d not found!!", key);

    return 0;

}




