#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int table[5][3] = { 0 };
	int i, j, sum=0;

	printf("��)\n");

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", table[i][j]);
		printf("\n");
	}

	printf("��)\n");

	for (i = 0; i < 5; i++) 
		for (j = 0; j < 3; j++)
			table[i][j] = i + j;
	
	i = 0;
	while (i < 5) {
		j = 0;
		while (j < 3) {
			printf("%d ", table[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	printf("��)\n");

	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
			sum += table[i][j];
	printf("Total is %d\n", sum);
}