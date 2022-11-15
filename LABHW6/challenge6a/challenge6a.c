#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int same(char w1[], char w2[])
{
	int i, count1=0, count2=0;
	for (i = 0; w1[i] != '\0'; i++) count1++;
	for (i = 0; w2[i] != '\0'; i++) count2++;

	if (count1 != count2)
		return 0;
	else
	{
		for (i = 0; w1[i] != '\0'; i++)
		{
			if (w1[i] != w2[i])
				return 0;
		}
		return 1;

	}

}

int main(void)
{
	char word1[100];
	char word2[100];

	printf("Entr the first word: ");
	scanf("%s", word1);
	printf("Entr the first word: ");
	scanf("%s", word2);

	if(same(word1, word2))
		printf("두 단어는 같다\n");
	else
		printf("두 단어는 다르다\n");
}