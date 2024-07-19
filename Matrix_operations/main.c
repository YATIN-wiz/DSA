#include <stdio.h>
#include <stdlib.h>
#include "operations.c"



int main()
{
   int ch;
   printf("Enter your choice:");
   scanf("%d", &ch);

   if (ch == 1)
   {
       void matrixaddition();
   }
   else if (ch == 2)
   {
       void matrixmultpication();
   }
   else
        printf("Invalid option!!");

    return 0;
}
