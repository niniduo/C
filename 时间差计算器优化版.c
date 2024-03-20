#include <stdio.h>  
  
int main() {  
    int hour1, minute1;  
    int hour2, minute2;  
    int hourDiff, minuteDiff;  
  
    // 输入第一个时间  
    printf("请输入第一个时间（格式：hh:mm）：");  
    if (scanf("%d:%d", &hour1, &minute1) != 2 || hour1 < 0 || hour1 > 23 || minute1 < 0 || minute1 > 59) {  
        printf("输入的时间格式不正确，请重新输入。\n");  
        return 1;  
    }  
  
    // 输入第二个时间  
    printf("请输入第二个时间（格式：hh:mm）：");  
    if (scanf("%d:%d", &hour2, &minute2) != 2 || hour2 < 0 || hour2 > 23 || minute2 < 0 || minute2 > 59) {  
        printf("输入的时间格式不正确，请重新输入。\n");  
        return 1;  
    }  
  
    // 计算时间差  
    if (hour1 < hour2) {  
        hourDiff = hour2 - hour1;  
        minuteDiff = minute2 - minute1;  
    } else if (hour1 > hour2 || (hour1 == hour2 && minute1 > minute2)) {  
        // 跨日情况或第一个时间的分钟数大于第二个时间的分钟数  
        hourDiff = hour1 - hour2 + 24; // 加上一天的小时数  
        minuteDiff = minute1 - minute2;  
        if (minuteDiff < 0) {  
            // 如果分钟数不够减，从小时数中借位  
            hourDiff--;  
            minuteDiff += 60;  
        }  
    } else {  
        // 小时相等，只计算分钟差  
        hourDiff = 0;  
        minuteDiff = minute2 - minute1;  
    }  
  
    // 输出时间差  
    printf("时间差为：%02d:%02d\n", hourDiff, minuteDiff);  
  
    return 0;  
}
