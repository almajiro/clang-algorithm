#include <stdio.h>

void PutUpperAlpha(int n)
{
	if(n > 0x81 && n <= 0x9F || n >= 0xE0 && n <= 0xFC)
	{
		putchar(n);
		putchar(getchar());
	}
	else if(n >= 'A' && n <= 'Z')
		putchar(n + ('a' - 'A'));
	else
		putchar(n);
}

int main(void)
{
	int n;
	while((n = getchar()) != EOF)
		PutUpperAlpha(n);

	return 0;
}
