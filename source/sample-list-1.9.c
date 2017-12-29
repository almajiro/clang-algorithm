#include <stdio.h>

int main()
{
	int nFlag1 = 1;
	int nFlag2 = 0;
	float pi = 3.1415;
	int r = 100;

	if(nFlag1 == 1 && nFlag2 > 0)
		printf("円周の長さ = %f\n", 2 * pi * r);
	else {
		printf("円の面積 = %f\n", pi * r * r);
	}

	return 0;
}
