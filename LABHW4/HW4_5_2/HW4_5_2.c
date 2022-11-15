#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_cycle_number(int n);
int count = 0;

int main(void)
{
	int n;

	printf("정수를 입력하세요: ");
	scanf("%d", &n);

	get_cycle_number(n);
	

	printf("\n사이클 길이: %d\n", count);
}

int get_cycle_number(int n)
{
	printf("%d ", n);
	count++;

	if (n == 1)
		return 1;
	else if(n % 2 == 0)
		return get_cycle_number(n / 2);
	else
		return get_cycle_number(n * 3 + 1);
}