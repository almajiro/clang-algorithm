#include <stdio.h>

int main(void)
{
	char q1, q2, q3;
	char dummy;

	printf("質問1 あなたは男性ですか女性ですか？(M = 男性, F = 女性) : ");
	
	/* get value */
	scanf("%c", &q1);

	if(q1 == 'M' || q1 == 'F'){
		/* skip enter */
		scanf("%c", &dummy);
		
		printf("質問2 あなたの生まれは？(T = 大正, S = 昭和, H = 平成) : ");
		
		/* get value */
		scanf("%c", &q2);

		if(q2 == 'T' || q2 == 'S' || q2 == 'H'){
			printf("あなたは");
			if(q1 == 'F' && q2 == 'T')
				printf("コンピュータおばあちゃんですね！\n");
			else if(q2 == 'H')
				printf("平成生まれ？ えーっ, すごい！\n");
			else
				printf("Cが好きになれそうですか？\n");
			
			return 0;
		}
	}

	printf("最初からやり直してください。\n");
	return 0;
}
