#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	int test[4][3] = { {8, 7}, {6, 5}, {1, 2}, {3, 4} };
	int i, j;
	int total = 0;
	float avg = 1;
	int max, maxTotal = 0;

	printf("�迭 test�� ������Ʈ�� ����մϴ�.\n\n");

	for (i = 0; i < 4; i++) {
		printf("%d��° row:", i+1);
		for (j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
		printf("\n");
	}

	printf("\n��)\n�迭 test�� ������Ʈ�� ����մϴ�.\n");

	for (i = 0; i < 4; i++)
	{
		printf("\n%d��° row: ", i + 1);
		for (j = 0; j < 3; j++)
		{
			test[i][2] = -1;
			printf("%5d", test[i][j]);
		}
	}
	
	printf("\n\n��)\n");

	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			total += test[i][j];

	avg = (float)total / 12;
	printf("Total is %d\n", total);
	printf("Average is %.2f\n", avg);

	printf("\n��)\n");

	for (i = 0; i < 4; i++) {
		max = 0;
		printf("%d��° row������ �ִ밪:", i + 1);

		for (j = 0; j < 3; j++) 
		{
			if (max < test[i][j])
				max = test[i][j];
		}
		maxTotal += max;
		printf("%d\n", max);
	}
	printf("�ִ밪�� ��: %d\n", maxTotal);
}