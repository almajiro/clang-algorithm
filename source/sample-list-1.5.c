#include <stdio.h>

/* global variable */
int i = 200;

int main(void)
{
	int i = 100;

	{
		int i = 50;
		printf("i = %d\n", i);
	}

	printf("i = %d\n", i);

	return 0;
}
