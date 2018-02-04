#include <stdio.h>
#include <stdlib.h>

unsigned short CalcSum()
{
	int Sum = 0;
	int n;
	while((n = getchar()) != EOF)
		Sum += n;
	Sum &= 0xffff;
	return Sum;
}

int main()
{
	FILE *pf;

	unsigned short nSum = CalcSum();
	printf("書きだすサムの値 = %d\n", nSum);

	if((pf = fopen("sumfile", "w")) == NULL){
		fprintf(stderr, "ファイルのオープンエラーです。\n");
		exit(1);
	}
	else{
		fputc(nSum, pf);
		nSum >>= 8;
		fputc(nSum, pf);
	}

	fclose(pf);

	return 0;
}
