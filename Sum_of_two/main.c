#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("%d+%d=%d \n", a,b,a+b  );
    printf("%d-%d=%d  \n", a,b, a-b );
    printf("%d*%d=%d \n", a,b, a*b);
    printf("%d/%d=%d \n", a,b, a/b);
    //printf("Sum:%d",a+b);
    return 0;
}
