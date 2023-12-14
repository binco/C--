#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int fact = 1;
    int i = 1;
    while (i<=num)
    {
        fact *=i;
        i++;
    }
    printf("%d\n", fact);
    return 0;
}
