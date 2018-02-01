#include <stdio.h>
#include <stdlib.h>

CheckSum(unsigned short s)
{
	int n;
	int temp = 0;
	unsigned short Sum_2;

	printf("読み込んだサムの値 = %d\n", s);

	while((n = getchar()) != EOF)
		temp += n;

	Sum_2 = temp;
	if(s == Sum_2)
		printf("チェックサムに問題はありませんでした。\n");
	else{
		printf("チェックサムの検証で問題が発見されました。\n");
		printf("もとのサム = %d\n", s);
		printf("今回のサム = %d\n", Sum_2);
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
				nSum += temp * 256;
				CheckSum(nSum);
			}
		}
	}

	fclose(pf);

	return 0;
}
