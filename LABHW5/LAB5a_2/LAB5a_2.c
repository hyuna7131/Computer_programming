#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rotateMatrix(int a[][4], int b[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
			b[j][size - 1 - i] = a[i][j];

}

void printMatrix(int a[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void copyMatrix(int a[][4], int b[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++) 
		for (j = 0; j < size; j++) 
			a[i][j] = b[i][j];
}

int main(void)
{
	int arrA[4][4];
	int arrB[4][4];
	int i, j;
	int count = 1;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			arrA[i][j] = count;
			count++;
		}
	}
	printMatrix(arrA, 4);
	
	rotateMatrix(arrA, arrB, 4);
	copyMatrix(arrA, arrB, 4);
	printMatrix(arrB, 4);
	
}