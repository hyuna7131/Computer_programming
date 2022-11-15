#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void printArray(int a[], int size);
void changeArray(int b[], int size);
int sumArray(int c[], int size);
int main(void)
{
	int data[5] = { 10, 20, 30, 40, 50 };
	printArray(data, 5); // 호출할 때의 인수에서는 배열의 이름을 사용한다. 

	changeArray(data, 5); // 5대신에 sizeof(data) / sizeof(int)를 써도 된다. 
	printArray(data, 5);
	printf("배열의 합은 %d\n", sumArray(data, 5));
}
void printArray(int a[], int size) // 앞에 것 그대로
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
	return;
}
void changeArray(int b[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		b[i] *= 10;
	return;
}
int sumArray(int c[], int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += c[i];
	return sum;
}