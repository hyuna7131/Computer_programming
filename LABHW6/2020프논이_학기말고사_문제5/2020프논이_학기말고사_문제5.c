#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int checking(char w0[], char w[])
{
	int i, j, count = 0;

	for (j = 0; w[j] != '\0'; j++) count++;

	for (i = 0; w0[i] != '\0'; i++)
	{
		for (j = 0; w[j] != '\0'; j++)
		{
			if (w0[i] == w[j])
				break;
		}
		if (j == count)
			return 0;
	}
	return 1;
}
int main(void)
{
	char w0[81] = "apple";
	char w1[81], w2[81], w3[81];

	scanf("%s %s %s", w1, w2, w3);

	printf("%d", checking(w0, w1));
	printf("%d", checking(w0, w2));
	printf("%d", checking(w0, w3));
}