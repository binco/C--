#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a=10;
    printf("a++的值是%d \n", a++ );
    a = 10;
    printf("++a的值是%d \n", ++a );
    a = 10;
    printf("a--的值是%d \n", a-- );
    a = 10;
    printf("--a的值是%d \n", --a );
    return 0;
}
