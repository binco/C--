#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int fact = 1;
   // int i = num;
    for ( ; num > 1; num--)
    {
       fact *=num; /* code */
    }
    
 //   int i = 1;
//  for (int i = 1; i <= num; i++)
//  {
//    fact *= i;   /* code */
//  }
//  
//  while (i<=num)
//  {
//      fact *=i;
//      i++;
//  }
    printf("%d\n", fact);
    return 0;
}
