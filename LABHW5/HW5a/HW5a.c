#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printMatrix(int a[][3], int size)
{
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 3; j++) {
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}

void readMatrix(int a[][3], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
}

void readMatrix2(int a[][2], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 2; j++)
			scanf("%d", &a[i][j]);
}

void matrixMultiplication(int a[][2], int b[][3], int c[][3], int size)
{
	int i, j, k;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < size; j++) {
			c[i][j] = 0;
			for (k = 0; k < 2; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	/*
	int i, j, k;
	for (i = 0; i < 4; i++) 
		for (j = 0; j < 3; j++) 
			for (k = 0; k < 2; k++) 
				c[i][j] += a[i][k] * b[k][j];
	*/
}

int main(void)
{
	int X[4][2], Y[2][3], Z[4][3];
	int i, j, k , sum;

	printf("(4 x 2) 행렬 X 입력:\n");
	readMatrix2(X, 4);
	printf("(2 x 3) 행렬 Y 입력:\n");
	readMatrix(Y, 2);

	// Z에 행렬곱을 넣는 코드(HW5a_1)
	/*
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			Z[i][j] = 0;
			for (k = 0; k < 2; k++) {
				Z[i][j] += X[i][k] * Y[k][j];
			}
		}
	}
	*/

	// 함수화는 나중에 해보자(HW5a_2)
	matrixMultiplication(X, Y, Z, 3);

	printf("행렬곱:\n"); printMatrix(Z, 4);
	printf("\n");
}