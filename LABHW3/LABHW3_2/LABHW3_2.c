#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h> 
#include <time.h> 
void initArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = rand() % 100;
	return;
}
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void printMinMax(int arr[], int size)
{
	// 최소값, 최대값을 찾아서 인덱스와 함께 출력하도록 정의하라
	int i;
	int minIndex = 0, maxIndex = 0;

	for (i = 0; i < size; i++) {
		if (arr[minIndex] > arr[i])
			minIndex = i;
		if (arr[maxIndex] < arr[i])
			maxIndex = i;
	}
	printf("최대값: 인덱스 %d , 값 = %d\n", maxIndex, arr[maxIndex]);
	printf("최소값: 인덱스 %d , 값 = %d\n", minIndex, arr[minIndex]);

	return 0;
}
int main(void) // 변경하지 말라
{
	int a[10];
	//srand(time(NULL)); 
	srand(100); // 실행결과가 맞나 보기 위해서 seed를 100으로 고정
	initArray(a, 10);
	printArray(a, 10);
	printMinMax(a, 10);
	return 0;
}