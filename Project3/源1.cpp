#include <stdio.h>
int main()
{
	int x, y;
	printf("������x��ֵ��");
	scanf_s("%d", &x);
	if (x < 5)
		y = 2 * x + 1;
	else if (x < 8)
		y = 5 * x - 5;
	else
		y = 8 * x - 3;
	printf("x��ֵΪ��%d,y��ֵΪ:%d\n", x, y);
	return 0;

}