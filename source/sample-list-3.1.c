#include <stdio.h>

int Min(int a, int b, int c)
{
	int temp1, temp2;
	temp1 = a < b ? a:b;
	temp2 = a < b ? b:c;
	return temp1 < temp2 ? temp1:temp2;
}

int Max(int a, int b, int c)
{
	int temp1, temp2;
	temp1 = a > b ? a:b;
	temp2 = b > c ? b:c;
	return temp1 > temp2 ? temp1:temp2;
}

int main(void)
{
	int n1 = 100;
	int n2 = 200;
	int n3 = 300;

	printf("最小値 = %d\n", Min(n1, n2, n3));
	printf("最小値 = %d\n", Min(n2, n1, n3));
	printf("最小値 = %d\n", Min(n3, n2, n1));

	printf("最大値 = %d\n", Max(n1, n2, n3));
	printf("最大値 = %d\n", Max(n2, n1, n3));
	printf("最大値 = %d\n", Max(n3, n2, n1));

	return 0;
}
