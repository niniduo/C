### C-第一天

3.20:sun_behind_small_cloud:

```c
#include <stdio.h> 
#include <math.h> //引入math库? 
int main()
{
	int a = 1;int b = 2;int c = 3;
	double delta; 
	double x1;
	double x2;
    //可以：double delta,x1,x2;
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
```

### 复盘

1. 格式规范化，{ }另起一行；遇到运算和赋值符号空格
2. 注意变量名称一致

### 问题

1. 为什么if语句后面不要加；？



```c
#include <stdio.h>
int mai()
{
    return 0;
}
```

