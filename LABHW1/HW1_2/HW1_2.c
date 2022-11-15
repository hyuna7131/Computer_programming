#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
	int coins[4] = { 500, 100, 50, 10 };
	int change, count[4];
	int i;

	printf("Enter the amount of change: ");
	scanf("%d", &change);

	for (i = 0; i < 4; i++) {
		count[i] = change / coins[i];
		change %= coins[i];
		printf("%d coin: %d\n", coins[i], count[i]);
	}

	return 0;
}