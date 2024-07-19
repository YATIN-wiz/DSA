#include <stdio.h>
#include <stdlib.h>

int main()
{
     int number, largest = 0;

    do {
        printf("Enter a number (enter -999 to end): ");
        scanf("%d", &number);
        if (number > largest)
            largest = number;
    } while (number > 0);

    printf("\nThe largest number entered was %d", largest);


    return 0;
}
