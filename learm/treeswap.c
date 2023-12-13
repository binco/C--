//3位数字按相反的顺序输出,不能0开头
#include<stdio.h>
int main()
{
    int x=0;
    scanf("%d", &x);
    printf("您输入的数字是%d", x);
    int a =x/100;
    int b =x%100/10;
    int c =x%10;
    printf("反转后的数字是%d", c*100+b*10+a*1);

    return 0;
}