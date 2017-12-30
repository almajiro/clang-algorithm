#include <stdio.h>

int main(void)
{
	char carray[27];
	int i;

	for(i=0; i<26; i++)
		carray[i] = 'A' + i;
	carray[i] = '\0';

	do{
		i--;
	}while (i > 0);

	printf("%s\n", &carray[i]);

	return 0;
}
