#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digits = 0,num,rev  ;
    printf("Enter a number:");
    scanf("%d", &num);

    while (num>0)

    {
        digits = num % 10;
        num = num/10;
        rev = rev*10 + digits;

    }                 //digit += 1


    printf("Reverse:%d", rev );
    return 0;
}
