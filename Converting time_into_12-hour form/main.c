#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m;
    printf("Enter a 24-hour time");
    scanf("%d%d", &h,&m);

    if (h < 13)
        printf("12-hour time: %02d:%02d AM", h,m);
    else
        printf("12-hour time: %02d:%02d PM", h - 12 ,m);
    return 0;
}
