#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit = 0,n;
    printf("Enter a non negative integer:");
    scanf("%d", &n);

    while (n>0)
      {

        n /= 10;
        digit++;
        }                 //digit += 1


        printf("The number has %d digits", digit);
    return 0;
}
