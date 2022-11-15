#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n);
/*
int main(void)
{
	int i, num;
	scanf("%d", &num);

	for (i = 1; i <= num; i++) 
		printf("%d ", 10*i+2);

	printf("\n%d\n", sum(num));
}

int sum(int n)
{
	if (n == 0)
		return 0;

	else {
		printf("%d ", 10 * n + 2);
		return (10 * n + 2) + sum(n - 1);
	}
}*/

int main(void)
{
	int i, num;
	scanf("%d", &num);

	printf("\n%d\n", sum(num));
}

int sum(int n)
{
	int total=0;

	if (n == 0)
		return 0;

	else {
		total = (10 * n + 2) + sum(n - 1);
		printf("%d ", 10 * n + 2);
		return total;
	}
}
