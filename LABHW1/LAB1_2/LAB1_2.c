#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main(void)
{
	int data[100];
	int num, i, max;
	 srand(time(NULL)); // �־��� ���� ����� ��ġ�ϳ��� �������ؼ� comment ó����. 
	// ���� ����� comment ó���� ����ϰ� ������Ѻ�����. 
	printf("Enter the number of random numbers:(<= 100): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++) 
		data[i] = rand() % 100;

	max = data[0];
	for (i = 0; i < num; i++) {
		if (max < data[i])
			max = data[i];
	}
	printf("�ִ밪�� %d\n", max);

	printf("------------------------------------------------------\n");
	printf("�߻��� ������\n");
	
	for (i = 0; i < num; i++) {
		printf("%5d", data[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
		
	return 0;
}