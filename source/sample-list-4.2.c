#include <stdio.h>
#define STRSIZE 32

void PrintBits(int val, int size)
{
	char array[STRSIZE + 1];
	unsigned int tester = 1;
	int i = 0;

	tester <<= size * 8 - 1;
	printf("%d\n\t = ", val);

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
	int operand1 = 16;
	int operand2 = 2;
	int temp;

	PrintBits(operand1, sizeof(operand1));
	printf("\n");
	PrintBits(operand2, sizeof(operand2));
	printf("\n");

	PrintBits(operand1 >> operand2, sizeof(operand1));
	printf("\n");

	PrintBits(operand1 << operand2, sizeof(operand2));
	printf("\n");

	return 0;
}
