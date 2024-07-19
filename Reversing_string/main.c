#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2


int main()
{
    char a[N] = {"hello", "world"};
    for (i = N ; i >= 0; i--)
    {
        printf("Enter %s", a[i]);
        //scanf("%s", a[i]);
    }


    //printf("ff\n", a[0]);
    return 0;
}
