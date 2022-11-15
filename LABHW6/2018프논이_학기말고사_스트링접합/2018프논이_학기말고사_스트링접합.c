#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mergeString(char c[], char a[], char b[])
{
	int i, j, count_a = 0, temp=0;

	for (i = 0; a[i] != '\0'; i++) count_a++;

	for (i = 0; i < a[i] != '\0'; i++)
		c[i] = a[i];
	
	for (i = 0; b[i] !='\0'; i++)
		c[count_a + i] = b[i];
	c[count_a+i] = '\0';

	min = c[0];
	for (i = 0; c[i] != '\0'; i++) {
		for (j = i; c[j] != '\0'; j++) {
			if (c[i] > c[j]) {
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}

	return c;
}

int main(void)
{
	char word1[10], word2[10];
	char mergedWord[20];

	scanf("%s", word1);
	scanf("%s", word2);
	mergeString(mergedWord, word1, word2);
	printf("%s\n", mergedWord);

}