#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void save(int money)
{
	static int total;

	total += money;
	printf("��������� �Աݾ� %d\n", total);
}

int main(void)
{
	int money=0, total=0;

	printf("������ �ݾ�<-1 for exit>: ");
	scanf("%d", &money);
		
	do{
		save(money);

		printf("������ �ݾ�<-1 for exit>: ");
		scanf("%d", &money);		

	} while (money != -1);

	printf("�ԱݿϷ�\n");
}