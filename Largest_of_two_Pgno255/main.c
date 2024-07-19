#include <stdio.h>
#include <stdlib.h>

void find_two_largest(int a[], int n, int largest, int second_largest)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            second_largest = largest;
            largest = a[i];
        }
        else if (a[i] <= largest && a[i] > second_largest)
        {
            second_largest = a[i];
        }

    }
     printf("\n Largest: %d, Second Largest: %d\n", largest, second_largest);
}
int main(void)
{
    int a[] = {1,23,21,5,4,6,8,2,56,8,9};
    int largest = 0, second_largest = 0, i;

    printf("Array contents: ");
    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
        printf("%d ", a[i]);


    find_two_largest(a, sizeof(a) / sizeof(a[0]), largest, second_largest);

    return 0;
}
