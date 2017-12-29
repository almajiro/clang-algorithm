#include <stdio.h>

void ShowData(char c[])
{
	printf("%s", c);
}

int main(void)
{
	char charray[] = "はじめての関数";

	ShowData(charray);

	return 0;
}
