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
int checkOverlap(int s[], int add, int count)
{
	int i;
	for (i = 0; i < count-1; i++) {
		if (s[i] == add)
			return 0;
	}
	return 1;
}

int main(void)
{
	int set[5] = { 0 };
	int add;
	int i, j, k, count = 0;

	for (i = 0; count != 5; i++) {
		printf("집합에 추가할 원소: ");
		scanf("%d", &add);
		count++;

		for (j = count - 1; j < count; j++) 
			set[j] = add;

		if(checkOverlap(set, add, count) == 0){
			count--;
			set[count] = 0;
			printf("%d는 이미 집합에 있음\n", add);
		}
		else 
			printSet(set, count);
							
	}	
}