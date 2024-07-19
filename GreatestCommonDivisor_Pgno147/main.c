#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, remainder;

    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    while (n > 0)
    {
       remainder = m % n;
       m = n;
       n = remainder;
    }
     printf("Greatest common divisor: %d", m);

    return 0;
}
