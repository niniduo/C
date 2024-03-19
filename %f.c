#include <stdio.h>

int main()
{
	printf("请输入身高的英尺和英寸：");
	//double foot=0;double inch=0;
	int foot=0;
	int inch=0;
	
	scanf("%d %d",&foot,&inch);//scanf严格限定类型，类型必须一致 
	
	printf("身高为：%f(m)\n",(foot+inch/12.0)*0.3048); //printf则没有那么严格， 
	//例如可以float和double之间转换， 
	//inch/12时代表进行的是整数运算，如果为inch/12.0则代表进行浮点运算。 
	//整数运算会自动丢弃小数部分，而不是四舍五入。 
	return 0;
	
}

