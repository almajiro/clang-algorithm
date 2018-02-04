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
	int operand1 = 55;
	int operand2 = 1250;
	int temp;

	printf("operand1 = ");
	PrintBits(operand1, sizeof(operand1));
	printf("\n");

	printf("operand2 = ");
	PrintBits(operand2, sizeof(operand2));
	printf("\n");

	printf("ANDの効果: ");
	PrintBits(operand1 & operand2, sizeof(operand1));
	printf("\n");

	printf("ORの効果: ");
	PrintBits(operand1 | operand2, sizeof(operand2));
	printf("\n");

	printf("XORの効果1: ");
	PrintBits((temp = operand1 ^ operand2), sizeof(operand1));
	printf("\n");
	printf("XORの効果2: ");
	PrintBits(temp ^ operand2, sizeof(operand1));

	printf("operand1の補数効果: ");
	PrintBits(~operand1, sizeof(operand1));
	printf("\n");

	printf("operand1の補数計算: ");
	PrintBits((-1 -operand1), sizeof(operand1));
	printf("\n");

	return 0;
}
