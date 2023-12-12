#include <stdio.h>

int main()
{
    int a=10;
    printf("%d\n", a++);
    printf("a=%d\n", a);
    printf("%d\n", ++a);
    printf("a=%d\n", a);
    printf("%d\n", 10+9*((8+7)%6)+5*4%3*2+3);
    return 0;
}