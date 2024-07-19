#include <stdio.h>
#include <stdlib.h>

void selection_sort(int arr[], int size)
{
    int smallest_index;
    int temp;
    int *p1,*p2,*p3;
    for(int i = 0; i<size; i++)
    {
        smallest_index = i;
        for(int j = i; j < size; j++)
        {
            if(arr[j] < arr[smallest_index])
                smallest_index = j;

        }
         p1 = &i;
         p2 = &arr[i];
         p3 = &smallest_index;
         void swap( p1, p2, p3);

    }
}
void swap(int *i, int *arr[], int *smallest_index)
{
    int temp;
    temp = *arr[*i];
    *arr[*i] = *arr[*smallest_index];
    *arr[*smallest_index] = temp;
}

int main()
{
    int arr[] = {1,2,3,67,5,6,75,8,9,11,32,23};
    int size = 12;
    for(int i = 0; i < size; i++)
    {
        printf("%d \n", arr[i]);
    }
    selection_sort( arr, size);
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
