#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void save(int money)
{
	static int total;

	total += money;
	printf("현재까지의 입금액 %d\n", total);
}

int main(void)
{
	int money=0, total=0;

	printf("저금할 금액<-1 for exit>: ");
	scanf("%d", &money);
		
	do{
		save(money);

		printf("저금할 금액<-1 for exit>: ");
		scanf("%d", &money);		

	} while (money != -1);

	printf("입금완료\n");
}