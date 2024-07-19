#include <stdio.h>
#include <stdlib.h>


//sorting in ascending order
void swap(int *p1, int *p2);
// problem solving,maintaince ,cost effective =>time, database
void bubble_sort(int arr[], int size)
{
    for(int i = 0; i < size ; i++)
    {
        for(int j = i; j < size -1 - i; j++)
        {
            if(arr[j] > arr[j + 1])

                swap( &arr[j], &arr[j + 1]);

        }
    }

}

void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}
void display(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1,2,3,67,5,6,75,8,9,11,32,23};
    int size = 12;
    display(arr, size);
    printf("\n");
    bubble_sort( arr, size);
    printf("Sorted Array: ");
    display(arr, size);

    return 0;
}
