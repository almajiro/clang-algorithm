#include <stdio.h>
#define STRSIZE 32

void PrintBits(int val, int size)
{
	char array[STRSIZE + 1];
	unsigned int tester = 1;
	int i = 0;

	tester <<= size * 8 - 1;
	printf("%d\t = ", val);

	while(tester){
		if(val & tester)
			array[i++] = 'I';
		else
			array[i++] = '0';
		tester >>= 1;
	}

	array[i] = '\0';
	printf("%s\n", array);
}

int main()
{
	char a;

	a = 0x7b;
	PrintBits(a, sizeof(a));

	a >>= 1;
	printf("a >>= 1の結果\n");
	PrintBits(a, sizeof(a));

	a <<= 1;
	printf("a <<= 1の結果\n");
	PrintBits(a, sizeof(a));

	a <<= 1;
	printf("a <<= 1の結果\n");
	PrintBits(a, sizeof(a));

	a >>= 1;
	printf("a >>= 1の結果\n");
	PrintBits(a, sizeof(a));

	return 0;
}
