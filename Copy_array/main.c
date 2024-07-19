#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5

int main()
{
    int array[N], barray[N] , i;
    printf("Enter numbers:");
    for(i >= 0 ; i < N; i++)
    {
        scanf("%d", &array[i]);
        //array[i] = barray[i];
    }
    for(i >= 0 ; i < N; i++)
    {
        barray[i] = array[i];
    }

    printf("scan %d \n", array[1]);
    printf("scan %d \n", barray[2]);
    return 0;
}
