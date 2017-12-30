#include <stdio.h>

int main()
{
	char c = 0;
	char cmax = -1;
	short int s = 0;
	short int smax = -1;
	int i = 0;
	int imax = -1;


	/* get char maximum value */
	while(cmax >= -1)
	{
		if(c > cmax)
			cmax = c++;
		else
			break;
	}
	printf("%d\n", cmax);

	/* get short int maximum value */
	while(smax >= -1)
	{
		if(s >smax)
			smax = s++;
		else
			break;
	}
	printf("%d\n", smax);

	/* get int maximum value */
	while(imax >= -1)
	{
		if(i > imax)
			imax = i++;
		else
			break;
	}
	printf("%d\n", imax);

	return 0;
}
