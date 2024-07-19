#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, num;
    printf("Multiplication table of:");
    scanf("%d", &num);
    for(a = 1; a<=10; a++)
    {


        printf("%d * %d = %d\n", num, a, (num * a));
    }

    return 0;
}
regr h
