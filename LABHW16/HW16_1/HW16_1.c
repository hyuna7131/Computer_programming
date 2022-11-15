#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int t[9][9];
	int i, j, num;

	printf("--구구단 표는 다음과 같습니다.\n");
	
	for (i = 0; i < 8; i++) 
		for (j = 0; j < 9; j++) 
			t[i][j]=(i + 2) * (j + 1);
		
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 9; j++) {
			printf("%4d", t[i][j]);
		}
		printf("\n");
	}

	printf("--원하는 구구단은? ");
	scanf("%d", &num);

	for (i = 0; i < 9; i++) {
		printf("%4d", t[num-2][i]);
	}
	printf("\n");
	/*
	for (i = num; i < num+1; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%4d", i * j);
		}
		printf("\n");
	}
	*/
}