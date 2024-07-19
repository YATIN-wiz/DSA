#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    printf("a: %d b: %d\n", *a , *b);
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("a: %d b: %d\n", *a , *b);
}

int main()
{
    int i = 1, j = 2;
    int *ptr1, *ptr2;
    ptr1 = &i;
    ptr2 = &j;
    printf("i: %d j: %d\n", i , j);
    swap(ptr1,ptr1);
    printf("i: %d j: %d\n", i , j);
    return 0;
}
