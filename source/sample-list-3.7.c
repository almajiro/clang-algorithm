#include <stdio.h>

void Swap(char a[], int n1, int n2)
{
	char temp = a[n1];
	a[n1] = a[n2];
	a[n2] = temp;
}

int main()
{
	int i;
	char a[] = { '0', '5', '2', '3', '8', '1', '6', '7', '4', '9' };

	int n = sizeof(a) / sizeof(char);

	for(i=0; i<n; i++)
		printf("%c ", a[i]);
	printf("\n");

	Swap(a, 1, 5);
	Swap(a, 4, 8);

	for(i=0; i<n; i++)
		printf("%c ", a[i]);
	printf("\n");

	return 0;
}
