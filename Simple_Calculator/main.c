#include <stdio.h>
#include <stdlib.h>

long calculator(int a, int b);

int main()
{
    int a, b;
    printf("Calculator!\n");
    printf("Enter two digits:");
    scanf("%d", &a);
    scanf("%d", &b);
    calculator( a, b);

    return 0;
}

long calculator(int a, int b)
{
    if (a > 0 || b > 0)
    {
        printf("Addition: %d\n",(a+b));
        printf("Subtraction: %d\n", (a-b));
        printf("Multiplication: %d\n", (a*b));
        printf("Division: %d \n", (a/b));
    }
    return -1;
}
