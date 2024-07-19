#include <stdio.h>
#include <stdlib.h>

long factorial(int num);

int main()
{
    int num;
    printf("Factorial of a number!\n" );
    scanf("%ld", &num);
    printf( "Factorial: %ld\n", factorial(num));
    return 0;
}
long factorial( int num)
{
    long fact = 1;
    if (num > 0)
    {
        for ( int i = 1; i <= num ; i++)
    {
        fact *= i;
    }
        return fact;
    }

    return -1;
}
