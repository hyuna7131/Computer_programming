#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_cycle_number(int n);

int main(void)
{
	int n;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);

	printf("\n����Ŭ ����: %d\n", get_cycle_number(n));
}

int get_cycle_number(int n)
{
	int count = 1;
	
	printf("%d ", n);

	while (n != 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = (n * 3) + 1;
		count++;
		printf("%d ", n);
	}
	return count;
}
/* // ����Լ� �̿�
int get_cycle_number(int n)
{
	printf("%d ", n);

	if(n == 1)
		return 1;
	else if(n % 2 == 0)
		return get_cycle_number(n / 2) + 1;
	else
		return get_cycle_number(n * 3 + 1) + 1;
}
*/