#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h> 

void printSet(int s[], int size)
{
	int i;
	printf("{ ");

	for (i = 0; i < size; i++) {
		printf("%2d ", s[i]);
		if (i < size - 1)
			printf(", ");
	}

	printf("}\n");
}
int main(void)
{
	int multiset[5] = {0};
	int add;
	int i, j, count=0; 

	for (i = 0; i < SIZE; i++) {
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &add);
		count++;

		for (j = count - 1; j < count; j++)
			multiset[j] = add;

		printSet(multiset, count);
	}
}