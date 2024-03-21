#include <stdio.h>  
  
int main() {  
    int hour1, minute1;  
    int hour2, minute2;  
    int hourDiff, minuteDiff;  
  
    // �����һ��ʱ��  
    printf("�������һ��ʱ�䣨��ʽ��hh:mm����");  
    if (scanf("%d:%d", &hour1, &minute1) != 2 || hour1 < 0 || hour1 > 23 || minute1 < 0 || minute1 > 59) {  
        printf("�����ʱ���ʽ����ȷ�����������롣\n");  
        return 1;  
    }  
  
    // ����ڶ���ʱ��  
    printf("������ڶ���ʱ�䣨��ʽ��hh:mm����");  
    if (scanf("%d:%d", &hour2, &minute2) != 2 || hour2 < 0 || hour2 > 23 || minute2 < 0 || minute2 > 59) {  
        printf("�����ʱ���ʽ����ȷ�����������롣\n");  
        return 1;  
    }  
  
    // ����ʱ���  
    if (hour1 < hour2) {  
        hourDiff = hour2 - hour1;  
        minuteDiff = minute2 - minute1;  
    } else if (hour1 > hour2 || (hour1 == hour2 && minute1 > minute2)) {  
        // ����������һ��ʱ��ķ��������ڵڶ���ʱ��ķ�����  
        hourDiff = hour1 - hour2 + 24; // ����һ���Сʱ��  
        minuteDiff = minute1 - minute2;  
        if (minuteDiff < 0) {  
            // �������������������Сʱ���н�λ  
            hourDiff--;  
            minuteDiff += 60;  
        }  
    } else {  
        // Сʱ��ȣ�ֻ������Ӳ�  
        hourDiff = 0;  
        minuteDiff = minute2 - minute1;  
    }  
  
    // ���ʱ���  
    printf("ʱ���Ϊ��%02d:%02d\n", hourDiff, minuteDiff);  
  
    return 0;  
}
