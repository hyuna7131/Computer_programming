#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int gradeTable[5][4] = { {10, 15, 20, 0}, {30, 35, 20, 0}, {60, 65, 20, 0}, {90, 95, 20, 0}, {0, 0, 0, 0} }; 
	int i, j; 
	int studentTotal, scoreTotal, colmnIndex=0;

	printf("a)\n"); 
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d", gradeTable[i][j]);
		printf("\n");
	}
	
	printf("b)\n");
	for (i = 0; i < 5; i++)
	{
		scoreTotal = 0;
		studentTotal = 0;
		for (j = 0; j < 4; j++)
		{
			scoreTotal += gradeTable[i][j];
			studentTotal += gradeTable[j][i];
		}
		gradeTable[i][3] = scoreTotal;
		gradeTable[4][colmnIndex] = studentTotal;
		if (colmnIndex == 3) {
			gradeTable[4][3] = 0;
			break;
		}
		colmnIndex++;
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d", gradeTable[i][j]);
		printf("\n");
	}
}
