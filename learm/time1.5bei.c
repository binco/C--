#include <stdio.h>
#include <stdlib.h>

// 函数用于转换时间，根据输入的速度rate
void convertTime(int hours, int minutes, int seconds) {
    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
    int newTotalSeconds = totalSeconds / 1.5;

    int newHours = newTotalSeconds / 3600;
    int remainingSeconds = newTotalSeconds % 3600;
    int newMinutes = remainingSeconds / 60;
    int newSeconds = remainingSeconds % 60;

    printf("%02d:%02d:%02d\n", newHours, newMinutes, newSeconds);
}

int main() {
    int hours, minutes, seconds;
    double rate;

    printf("请输入时间（小时:分钟:秒）：");
    scanf("%d:%d:%d", &hours, &minutes, &seconds);

    //printf("请输入播放倍速：");
    //scanf("%lf", &rate);

    convertTime(hours, minutes, seconds);

    return 0;
}
