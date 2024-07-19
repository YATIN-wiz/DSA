#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(char *a)
{

    int temp;
    int len = strlen(a);
    //printf("%d \n", len);
    for(int i = 0; i < len ; i++)
    {

        for(int j = 0 ; j < len - 1 - i ; j++)
        {
            if(a[i] > a[i + 1 ])
            {
                temp = *(a + i);
                *(a + i) = *(a + i +1);
                *(a + i +1) = temp;
            }
        }
    }


}

int main()
{
    char a, b;
    printf("Enter a strings:");
    scanf(" %s \n", &a);
    scanf(" %s ", &b);

    if(strlen(a) == strlen(b))
    {
        bubble_sort(a);
        bubble_sort(b);
        printf("They are Anagram");
        /* for(int i = 0; i < strlen(arr); i++)
        {
         printf("%c \n", arr[i]);
        }*/
    }
    else
        printf("Not a Anagram!");

    return 0;
}
