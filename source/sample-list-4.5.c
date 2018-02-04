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

long status;

void setstat(int nstat)
{
	nstat &= 0xff;
	status = nstat;
}

void addstat(int nstat)
{
	nstat &= 0xff;
	status |= nstat;
}

void delstat(int nstat)
{
	nstat &= 0xff;
	nstat = ~nstat;
	status &= nstat;
}

int main()
{
	setstat(0x65);
	PrintBits(status, sizeof(status));

	addstat(0x0a);
	PrintBits(status, sizeof(status));

	delstat(0x0a);
	PrintBits(status, sizeof(status));

	addstat(0xa000);
	PrintBits(status, sizeof(status));

	delstat(0xa000);
	PrintBits(status, sizeof(status));

	return 0;
}
