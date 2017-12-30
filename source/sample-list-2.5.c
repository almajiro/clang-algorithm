#include <stdio.h>

int main(void)
{
	char carray[26];
	int narray[20];
	int i;

	for(i=0; i<26; i++)
		carray[i] = 'A' + i;

	for(i=0; i<20; i++)
		narray[i] = (i+1) * 10;

	for(i=0; i<26; i++)
		printf("%c ", carray[i]);
	printf("\n");

	for(i=0; i<20; i++)
		printf("%d ", narray[i]);
	printf("\n");

	return 0;
}
