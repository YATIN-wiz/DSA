#include <stdio.h>
#include <stdlib.h>
#define N 40

int main()
{
    int first = 0, second = 1, third;
    int fib_numbers[N];
    fib_numbers[0] = first;
    fib_numbers[1] = second ;

    for(int i = 2; i < N; i++)
    {
        third = first + second;
        fib_numbers[i] = third;
        first = second;
        second = third;
    }
    for(int j = 0; j<N; j++)
    {
        printf("%d \n", fib_numbers[j]);
    }

    return 0;
}
