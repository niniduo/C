#include <stdio.h>

int main()
{
	printf("��������ߵ�Ӣ�ߺ�Ӣ�磺");
	//double foot=0;double inch=0;
	int foot=0;
	int inch=0;
	
	scanf("%d %d",&foot,&inch);//scanf�ϸ��޶����ͣ����ͱ���һ�� 
	
	printf("���Ϊ��%f(m)\n",(foot+inch/12.0)*0.3048); //printf��û����ô�ϸ� 
	//�������float��double֮��ת���� 
	//inch/12ʱ������е����������㣬���Ϊinch/12.0�������и������㡣 
	//����������Զ�����С�����֣��������������롣 
	return 0;
	
}

