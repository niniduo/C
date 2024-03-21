#include <stdio.h>
//时间差计算器
int main()
{
	int hour1;
	int minute1;
	printf("请输入第一个时间：");
	scanf("%d:%d",&hour1,&minute1);
	
	int hour2;
	int minute2; 
	printf("请输入第二个时间：");
	scanf("%d:%d",&hour2,&minute2);
	
	int min1=hour1*60+minute1;
	int min2=hour2*60+minute2;
	printf("时间差为：%dh%dmin",(min1-min2)/60,(min1-min2)%60);
	
	return 0;
}

