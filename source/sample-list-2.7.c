#include <stdio.h>

int main(void)
{
	int n = 100;
	int *pi = &n;

	printf("%d\n", *pi);

	return 0;
}
