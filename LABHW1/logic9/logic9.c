#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int A[5] = { 10, 20, 30, 40, 50 };
	int R[5];
	int i;

	for (i = 0; i < 5; i++)
		R[4 - i] = A[i];

	for (i = 0; i < 5; i++)
		printf("%d ", R[i]);

	return 0;
}