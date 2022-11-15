#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int isSameArray(int a[], int b[], int aSize, int bSize)
{
	int i;

	if (aSize != bSize)
		return 0;
	else
		for (i = 0; i < aSize; i++) {
			if (a[i] != b[i])
				return 0;
		}
	return 1;
}

int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 1,2,3,4,5 };

	if (isSameArray(a, b, 5, 5))
		printf("같다\n");
	else
		printf("다르다\n");

	return 0;
}