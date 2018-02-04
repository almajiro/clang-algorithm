#include <stdio.h>
#include <stdlib.h>

CheckSum(unsigned short s)
{
	int n, Sum;
	int temp = 0;

	printf("読み込んだサムの値 = %d\n", s);

	while((n = getchar()) != EOF)
		temp += n;

	Sum = temp & 0xffff;
	if(s == Sum)
		printf("チェックサムに問題はありませんでした。\n");
	else{
		printf("チェックサムの検証で問題が発見されました。\n");
		printf("もとのサム = %d\n", s);
		printf("今回のサム = %d\n", Sum);
	}
}

int main()
{
	unsigned short nSum;
	int temp;
	FILE *pf;

	if((pf = fopen("sumfile", "r")) == NULL){
		fprintf(stderr, "ファイルのオープンエラーです。\n");
		exit(1);
	}
	else{
		temp = fgetc(pf);
		if(temp != EOF){
			nSum = temp;
			temp = fgetc(pf);
			if(temp != EOF){
				nSum += temp << 8;
				CheckSum(nSum);
			}
		}
	}

	fclose(pf);

	return 0;
}
