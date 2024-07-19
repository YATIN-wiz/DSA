#include <stdio.h>
#include <stdlib.h>

int main()
{
    char y;
    printf("Enter a character:");
    scanf("%c", &y);

    switch(y) //Checks only for equality ie:
    {
        case 'V':
        case 'v':printf("Violet\n");break;
        case 'I':
        case 'i':printf("Indigo\n");break;
        case 'B':
        case 'b':printf("Blue\n");break;
        case 'G':
        case 'g':printf("Green\n");break;
        case 'Y':
        case 'y':printf("Yellow\n");break;
        case 'O':
        case 'o':printf("Orange\n");break;
        case 'R':
        case 'r':printf("Red\n");break;
        default:("Not in rainbow!");
    }

    return 0;
}
