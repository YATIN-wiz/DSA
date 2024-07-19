#include <stdio.h>
#include <stdlib.h>

int main()
{   int r;
    printf("Enter radius of the circle:");
    scanf("%d",&r);
    printf("Area of circle:%f", (float)(3.14*r*r));
    return 0;
}
