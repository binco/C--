#include <stdio.h>

int main()
{
    int hours_1=0, minuet_1=0;
    int hours_2=0, minuet_2=0;
    //printf("请输入开始时间,如9时5分(输入9:5),请输入:");
    scanf("%d %d", &hours_1, &minuet_1);

    //printf("请输入结束时间,如10时45分(输入10:45),请输入:");
    scanf("%d %d", &hours_2, &minuet_2);

    int t1 = hours_1 * 60 + minuet_1;
    int t2 = hours_2 * 60 + minuet_2;
    int t = t2-t1;
    printf("时间差为%d小时%d分钟", t/60, t%60);

    return 0;
}