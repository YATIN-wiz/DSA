#include <stdio.h>
#include <stdlib.h>

int main()
{
    float in;
    printf("Enter the amount of taxable income:\n");
    scanf("%f", &in);

    if (in <= 750)
        printf("Amount of tax:%f", (in*1/100));
    else if (in >= 750 && in < 2250)
        printf("Amount of tax:%f" , (7.50 + (in*2/100)));
    else if (in >= 2250 && in < 3750)
        printf("Amount of tax:%f" , (37.50 + (in*3/100)));
    else if (in >= 3750 && in < 5250)
        printf("Amount of tax:%f" , (82.50 + (in*4/100)));
    else if (in >= 5250 && in < 7000)
        printf("Amount of tax:%f" ,(142.50 + (in*5/100)));
    else
        printf("Amount of tax:%f" ,(230.00 + (in*6/100)));
    return 0;
}
