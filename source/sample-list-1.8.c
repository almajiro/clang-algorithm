#include <stdio.h>

int main(void)
{
	int nFlag = 1;
	float pi = 3.1415;
	int r = 100;

	if(nFlag == 1)
		printf("円周の長さ = %f\n", 2 * pi * r);
	else {
		printf("円の面積 = %f\n", pi * r * r);
	}

	return 0;
}
