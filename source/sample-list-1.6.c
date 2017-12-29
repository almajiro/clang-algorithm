#include <stdio.h>

int i = 200;

int main(void)
{
	int i = 100;

	{
		int j = 50;
		printf("j = %d\n", j);
	}

	printf("j = %d\n", j);

	return 0;
}

