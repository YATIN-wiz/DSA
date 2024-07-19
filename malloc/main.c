#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    int size = 0;
    printf("How many characters:");
    scanf("%d", &size);
    ptr = (char*)malloc(sizeof(char) * size);
    printf("%d", (sizeof(char)*size));
    printf("Enter characters: \n");
    for (int i = 0; i < size; i ++)
    {
        scanf("%c", ptr + i);
    }
    printf("Characters:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%c", *(ptr + i));
    }
    free(ptr);
    return 0;
}
