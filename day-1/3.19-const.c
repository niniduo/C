#include <stdio.h>
//scanf and printf
int main()
{
	//const int A=100;
	int amount=0;
	int price=0;
	printf("���������ѽ�Ԫ����");
	scanf("%d",&price);
	
	printf("������Ʊ�棺");
	scanf("%d",&amount); 
	
	int change=amount-price;
	printf("��Ҫ����%dԪ��\n",change);
	
	return 0;
}
 
