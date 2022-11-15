#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int sumList(int arr[], int size);
int maxList(int arr[], int size);
int indexSearch(int arr[], int size, int key);

int main(void)
{
	int list[10] = { 10, 20, 30, 40, 50, 40, 30, 20, 10, 0 };
	int value;
	int keyIndex;

	printf("���� %d\n", sumList(list, 10));

	printf("���� ū ���� %d\n", maxList(list, 10));

	printf("Ž���� ����? ");
	scanf("%d", &value);

	keyIndex = indexSearch(list, 10, value);

	if (keyIndex != -1)
		printf("�� %d�� ���� ù��° ���� %d��°�� �ֽ��ϴ�\n", value, keyIndex+1);
	else
		printf("����");

	return 0;
}

//sumList �� ����
int sumList(int arr[], int size)
{
	int i, total = 0;
	for (i = 0; i < size; i++)
		total += arr[i];
	return total;
}
// ���� ū ���� ��ȯ�Ѵ�. 
int maxList(int arr[], int size)
{
	int i, max = arr[0];
	for (i = 0; i < size; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
//key �� ������ -1 �� ������ �� �ε����� ��ȯ�Ѵ�. 
int indexSearch(int arr[], int size, int key)
{
	int i;
	for (i = 0; i < size; i++) 
		if (key == arr[i])
			return i;
	
	return -1;
}