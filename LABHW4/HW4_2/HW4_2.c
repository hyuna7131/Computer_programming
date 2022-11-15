#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fibo(int n);
int main(void)
{
	int n, idx;

	printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수):");
	scanf("%d", &n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
}
int fibo(int n) // 재귀적으로 구현하지 않는다
{
	int i, result, n1=1, n2=1;

	if (n == 0 || n == 1)
		result = 1;
	for (i = 2; i < n+1; i++)
	{
		result = n1 + n2;
		n1 = n2;
		n2 = result;

	}
	return result;
}
/*
int fibo(int n)
{
	int i, a=0, b=1, c=1;
	for(i=0; i< n; i++){
		c = a+b;
		a = b;
		b = c;
	}
	return c;
}
*/
