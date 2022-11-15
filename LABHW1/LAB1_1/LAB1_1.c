#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num[5];
	int i, total = 0, average = 1;

	for (i = 0; i < 5; i++) {
		printf("Enter %dth number: ", i+1);
		scanf("%d", &num[i]);
	}

	printf("-----------------------------------\n");
	for (i = 0; i < 5; i++) 
		total += num[i];
	
	average = total / 5;

	printf("ÃÑÁ¡Àº %d\n", total);
	printf("Æò±ÕÀº %d\n", average);
	printf("-----------------------------------\n");

	for (i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]);

	return 0;
}