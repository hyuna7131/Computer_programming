#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char id[50];
	char year[5];
	char* gender;

	printf("�ֹε�Ϲ�ȣ �Է�<'-'����>: ");
	gets(id);

	year[0] = '1'; 
	year[1] = '9';
	year[2] = '\0';
	printf("����� %s�⵵ ���̱���\n", strncat(year, id, 2));
	
	gender = strtok(id, "-");
	gender = strtok(NULL, "-");

	if (*gender == '1') {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 77�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", atoi(year) + 77);
	}
	else if (*gender == '2') {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 84�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", atoi(year) + 84);
	}
}