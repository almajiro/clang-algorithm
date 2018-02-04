#include <stdio.h>

#define WEIGHT1 3
#define WEIGHT2 3
#define WEIGHT3 4
#define WEIGHT4 7
#define WEIGHT5 6
#define WEIGHT6 1

unsigned SetDigit(unsigned u)
{
	unsigned temp = u * 10;
	unsigned subt = 0;
	unsigned accum = 0;
	unsigned u1, u2, u3, u4, u5;

	u1 = u / 10000;
	accum += u1 * WEIGHT1;
	subt += u1 * 10000;

	u2 = (u - subt) / 1000;
	accum += u2 * WEIGHT2;
	subt += u2 * 1000;

	u3 = (u- subt) / 100;
	accum += u3 * WEIGHT3;
	subt += u3 * 100;

	u4 = (u - subt) / 10;
	accum += u4 * WEIGHT4;
	subt += u4 * 10;

	u5 = (u - subt);
	accum += u5 * WEIGHT5;

	temp += 10 - (accum % 10);

	return temp;
}

void CheckDigit(unsigned u)
{
	unsigned subt = 0;
	unsigned accum = 0;
	unsigned u1, u2, u3, u4, u5, u6;

	u1 = u / 100000;
	accum += u1 * WEIGHT1;
	subt += u1 * 100000;

	u2 = (u - subt) / 10000;
	accum += u2 * WEIGHT2;
	subt += u2 * 10000;

	u3 = (u - subt) / 1000;
	accum += u3 * WEIGHT3;
	subt += u3 * 1000;

	u4 = (u - subt) / 100;
	accum += u4 * WEIGHT4;
	subt += u4 * 100;

	u5 = (u - subt) / 10;
	accum += u5 * WEIGHT5;
	subt += u5 * 10;

	u6 = (u - subt);
	accum += u6 * WEIGHT6;

	if(!(accum % 10))
		printf("この番号は正しい番号です。\n");
	else {
		printf("この番号には誤りがあります。\n");
	}
}

int main()
{
	unsigned enumber1 = 525411;
	unsigned enumber2 = 319883;
	unsigned enumber3 = 416557;

	unsigned number = 15926;

	unsigned number_cd;

	printf("CD設定前の番号 = %u\n", number);
	number_cd = SetDigit(number);
	printf("CD設定後の番号 = %u\n", number_cd);

	CheckDigit(number_cd);
	CheckDigit(enumber1);
	CheckDigit(enumber2);
	CheckDigit(enumber3);

	return 0;
}
