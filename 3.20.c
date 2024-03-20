#include <stdio.h> 
#include <math.h> //引入math库? 
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	double delta;//可以：double delta,x1,x2; 
	double x1;
	double x2;
	delta = b*b - 4*a*c;
	if(delta > 0)
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b+sqrt(delta))/(2*a);
		printf("这个函数有两个解，一个解是%lf,另一个解是%lf",x1,x2);
			
	}
	else if (delta == 0)
	{
		x1=(-b) / (2*a);
		x2=x1;
		printf("这个函数有且仅有一个解为：%lf",x2);
		 
		 
	}
	else
	{
		printf("无解");
	}
	return 0;
	 
}
