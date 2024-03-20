#include <stdio.h>
//scanf and printf
int main()
{
	//const int A=100;
	int amount=0;
	int price=0;
	printf("请输入消费金额（元）：");
	scanf("%d",&price);
	
	printf("请输入票面：");
	scanf("%d",&amount); 
	
	int change=amount-price;
	printf("需要找零%d元。\n",change);
	
	return 0;
}
 
