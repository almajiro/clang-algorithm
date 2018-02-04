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
	unsigned char b;
	int i;

	printf("char型のインクリメント\n");
	for(a=0x7a, i=0; i<10; i++, a++)
		PrintBits(a, sizeof(a));

	printf("unsigned char型のインクリメント\n");
	for(b=0x7a, i=0; i<10; i++, b++)
		PrintBits(b, sizeof(b));

	return 0;
}
