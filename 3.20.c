#include <stdio.h> 
#include <math.h> //����math��? 
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	double delta;//���ԣ�double delta,x1,x2; 
	double x1;
	double x2;
	delta = b*b - 4*a*c;
	if(delta > 0)
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b+sqrt(delta))/(2*a);
		printf("��������������⣬һ������%lf,��һ������%lf",x1,x2);
			
	}
	else if (delta == 0)
	{
		x1=(-b) / (2*a);
		x2=x1;
		printf("����������ҽ���һ����Ϊ��%lf",x2);
		 
		 
	}
	else
	{
		printf("�޽�");
	}
	return 0;
	 
}
