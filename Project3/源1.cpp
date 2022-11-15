#include <stdio.h>
int main()
{
	int x, y;
	printf("请输入x的值：");
	scanf_s("%d", &x);
	if (x < 5)
		y = 2 * x + 1;
	else if (x < 8)
		y = 5 * x - 5;
	else
		y = 8 * x - 3;
	printf("x的值为：%d,y的值为:%d\n", x, y);
	return 0;

	
	
	
	
	
	

}
