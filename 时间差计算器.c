#include <stdio.h>
//ʱ��������
int main()
{
	int hour1;
	int minute1;
	printf("�������һ��ʱ�䣺");
	scanf("%d:%d",&hour1,&minute1);
	
	int hour2;
	int minute2; 
	printf("������ڶ���ʱ�䣺");
	scanf("%d:%d",&hour2,&minute2);
	
	int min1=hour1*60+minute1;
	int min2=hour2*60+minute2;
	printf("ʱ���Ϊ��%dh%dmin",(min1-min2)/60,(min1-min2)%60);
	
	return 0;
}

