#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerator, denominator, x, y, rem;

    printf("Enter a fraction x/y: ");
    scanf("%d/%d", &numerator, &denominator);

    x = numerator;
    y = denominator;


    while (y != 0)
    {
        rem = x % y;
        x = y;
        y = rem;
    }

    printf("GCD = %d/n", x);


    numerator /= x;
    denominator /= x;

    printf("In lowest terms: %d/%d" , numerator, denominator);
    return 0;
}
