#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
int maxData();
int data[10]; // ��� ���࿡ ����� ���� ����

int main(void)
{
	srand(200);
	generateData();
	printf("�߻��� 10���� ����:\n");
	printData();
	printf("10�� ������ �� = %d \n", totalData());
	printf("10�� ������ ���� ū �� = %d \n", maxData());
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