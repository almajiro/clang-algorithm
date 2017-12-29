#include <stdio.h>

int main(void)
{
	int n1, n2, n3, m1, m2, m3;
	n1 = m1 = 100;
	n2 = m2 = 200;

	n3 = (n1++ + n2++);
	printf("n1 = %d\n", n1);
	printf("n2 = %d\n", n2);
	printf("n3 = %d\n", n3);

	m3 = (++m1 + ++m2);
	printf("m1 = %d\n", m1);
	printf("m2 = %d\n", m2);
	printf("m3 = %d\n", m3);

	return 0;
}
