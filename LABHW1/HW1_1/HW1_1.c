#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main(void)
{
	int count[10]={0}, array[100];
	int i, j, num;
	srand(time(NULL)); 

	printf("Enter the number of random numbers:<<= 100>: ");
	scanf("%d", &num);

	for (i = 0; i < num; i++) 
		array[i] = rand() % 10;

	for (i = 0; i < num; i++) {
		for (j = 0; j < 10; j++) {
			if (array[i] == j)
				count[j]++;            
		}
	}
	/* // 개수 세기 다른 아이디어
	for (i = 0; i < num; i++)
		count[array[i]]++;
	*/

	for (i = 0; i < 10; i++)
		printf("%d의 개수는 %d\n", i, count[i]);

	printf("---------------------------------------------------\n");
	printf("발생된 난수는\n");

	for (i = 0; i < num; i++) {
		printf("%5d", array[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}

	return 0;
}