#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/* // ver. 1 found
int main(void)
{
	int array[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int i, searchKey;
	int found = 0;

	printf("찾을 키는? ");
	scanf("%d", &searchKey);

	for (i = 0; i < 12; i++) {
		if (array[i] == searchKey) {
			found = 1;
			break;
		}
	}

	if (found)
		printf("%d는 배열의 %d 번째에 있습니다.\n", searchKey, i+1);
	else
		printf("못찾았습니다.\n");
}
*/
/* // ver. 2 keyIndex
int main(void)
{
	int array[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int i, searchKey;
	int keyIndex = -1;

	printf("찾을 키는? ");
	scanf("%d", &searchKey);

	for (i = 0; i < 12; i++) {
		if (array[i] == searchKey) {
			keyIndex = i;
			break;
		}
	}

	if (keyIndex == -1)
		printf("못찾았습니다.\n");
	else
		printf("%d는 배열의 %d 번째에 있습니다.\n", searchKey, keyIndex + 1);
}
*/
/* // ver. 3 found, keyIndex X
int main(void)
{
	int array[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int i, searchKey;
	int keyIndex = -1;

	printf("찾을 키는? ");
	scanf("%d", &searchKey);

	for (i = 0; i < 12; i++) {
		if (array[i] == searchKey)
			break;
	}

	if (i == 12) // 12 == 배열크기
		printf("못찾았습니다.\n");
	else
		printf("%d는 배열의 %d 번째에 있습니다.\n", searchKey, i + 1);
}
*/
// 함수
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

	printf("찾을 키는? ");
	scanf("%d", &searchKey);

	if (searchIndexArray(array, 12, searchKey) == -1)
		printf("못찾았습니다.\n");
	else
		printf("%d는 배열의 %d 번째에 있습니다.\n", searchKey, searchIndexArray(array, 12, searchKey) + 1);
}