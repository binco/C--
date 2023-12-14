#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 10; i >1; i/=2)
    {
        printf("%d ",i++ );/* code */
    }
    
    return 0;
}
