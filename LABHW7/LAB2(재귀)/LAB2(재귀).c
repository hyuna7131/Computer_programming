#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void to_binary(int n);

int main(void)
{
	int i, num;

	scanf("%d", &num);
	
	to_binary(num);

	printf("\n");
}

void to_binary(int n)
{
	int num[100];

	if (n > 0) {
		to_binary(n / 2);
		printf("%d ", n % 2);
	}
}