#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/* // ver. 1 found
int main(void)
{
	int array[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int i, searchKey;
	int found = 0;

	printf("ã�� Ű��? ");
	scanf("%d", &searchKey);

	for (i = 0; i < 12; i++) {
		if (array[i] == searchKey) {
			found = 1;
			break;
		}
	}

	if (found)
		printf("%d�� �迭�� %d ��°�� �ֽ��ϴ�.\n", searchKey, i+1);
	else
		printf("��ã�ҽ��ϴ�.\n");
}
*/
/* // ver. 2 keyIndex
int main(void)
{
	int array[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int i, searchKey;
	int keyIndex = -1;

	printf("ã�� Ű��? ");
	scanf("%d", &searchKey);

	for (i = 0; i < 12; i++) {
		if (array[i] == searchKey) {
			keyIndex = i;
			break;
		}
	}

	if (keyIndex == -1)
		printf("��ã�ҽ��ϴ�.\n");
	else
		printf("%d�� �迭�� %d ��°�� �ֽ��ϴ�.\n", searchKey, keyIndex + 1);
}
*/
/* // ver. 3 found, keyIndex X
int main(void)
{
	int array[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int i, searchKey;
	int keyIndex = -1;

	printf("ã�� Ű��? ");
	scanf("%d", &searchKey);

	for (i = 0; i < 12; i++) {
		if (array[i] == searchKey)
			break;
	}

	if (i == 12) // 12 == �迭ũ��
		printf("��ã�ҽ��ϴ�.\n");
	else
		printf("%d�� �迭�� %d ��°�� �ֽ��ϴ�.\n", searchKey, i + 1);
}
*/
// �Լ�
int searchIndexArray(int a[], int size, int searchKey)
{
	for (int i = 0; i < 12; i++)
		if (a[i] == searchKey)
			return i;

	return -1;
}

int main(void)
{
	int array[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int i, searchKey;

	printf("ã�� Ű��? ");
	scanf("%d", &searchKey);

	if (searchIndexArray(array, 12, searchKey) == -1)
		printf("��ã�ҽ��ϴ�.\n");
	else
		printf("%d�� �迭�� %d ��°�� �ֽ��ϴ�.\n", searchKey, searchIndexArray(array, 12, searchKey) + 1);
}