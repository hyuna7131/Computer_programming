#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
int maxData();
int data[10]; // 계산 수행에 사용할 전역 변수

int main(void)
{
	srand(200);
	generateData();
	printf("발생된 10개의 난수:\n");
	printData();
	printf("10개 난수의 합 = %d \n", totalData());
	printf("10개 난수중 가장 큰 수 = %d \n", maxData());
}
void generateData()
{
	int i;
	int* p;
	p = data;

	for (i = 0; i < 10; i++) {
		*p = rand()%100;
		p++;
	}

}
void printData()
{
	int i;
	int* p;
	p = data;

	for (i = 0; i < 10; i++)
		printf("%d ", *p++);
	printf("\n");
}
int totalData()
{
	int i, sum=0;
	int* p;
	p = data;

	for (i = 0; i < 10; i++)
		 sum += *p++;

	return sum;
}
int maxData()
{
	int i, max;
	int* p;
	p = data;

	max = *p;
	for (i = 0; i < 10; i++)
	{
		if (max < *(p + i))
			max = *(p + i);
	}

	return max;
}