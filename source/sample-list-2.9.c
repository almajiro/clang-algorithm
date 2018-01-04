#include <stdio.h>

#define OS_32_BIT

#ifdef OS_16_BIT
	typedef long newint;
#elif defined(OS_32_BIT)
	typedef int newint;
#endif

int main(void)
{
	char array[26];
	char *pch = array;
	newint *pn;
	char c;

	for(c='A'; c<('A'+26); c++)
		*pch++ = c;

	pch = array;
	for(c=0; c<26; c++)
		printf("%c", *pch++);
	printf("\n");

	pn = (int *)array;
	for(c=0; c<7; c++)
		printf("%c   ", (char)*pn++);
	printf("\n");

	pn = (int *)array;
	for(c=0; c<6; c++)
		printf("%d   ", *pn++);
	printf("\n");

	printf("char *型ポインタのスパン = %d\n", sizeof(*pch));
	printf("int *型のスパン = %d\n", sizeof(*pn));

	return 0;
}
