#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h> 
#include <stdlib.h>

void selectionSort(int list[], int size)
{
	int i, j, minIndex, temp;

	for (i = 0; i < SIZE - 1; i++) {
		minIndex = i;

		for (j = i + 1; j < SIZE; j++) {
			if (list[minIndex] > list[j])
				minIndex = j;
		}

		temp = list[minIndex];
		list[minIndex] = list[i];
		list[i] = temp;
	}
}
int main(void)
{
	int arry[10];
	int i;

	srand(time(NULL));

	printf("발생된 난수:\t");
	for (i = 0; i < SIZE; i++) {
		arry[i] = rand() % 100;
		printf("%2d ", arry[i]);
	}
		
	printf("\n정렬 후:\t");

	selectionSort(arry, SIZE);

	for (i = 0; i < SIZE; i++)
		printf("%2d ", arry[i]);
	printf("\n");
}