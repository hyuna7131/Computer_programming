#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[50]; // �ԷµǴ� ���ڿ��� ����
	char alphaString1[50]; // �Է¹��ڿ����� ���ĺ��� ����
	char alphaString2[50]; // ��ҹ��ڸ� �ٲ�
	char digitString[50];
	char convertedString[50]; // ���ڵ�� ���ڵ�� ��迭�� ���ڿ�
	int i, j, count;

	printf("���ڿ��� �Է��ϼ���:");
	fgets(string, sizeof(string), stdin);
	
	count = 0;
	for (i = 0; i < strlen(string); i++) {
		if (isalpha(string[i])) {
			alphaString1[count] = string[i];
			count++;
		}
	}
	alphaString1[count] = '\0';

	count = 0;
	for (i = 0; i < strlen(string); i++) {
		if (isdigit(string[i])) {
			digitString[count] = string[i];
			count++;
		}
	}
	digitString[count] = '\0';

	printf("���ڵ��� %s\n", alphaString1);
	printf("���ڵ��� %s\n", digitString);

	count = 0;
	for (i = 0; i < strlen(string); i++) {
		if (islower(string[i])) {
			alphaString2[count] = toupper(string[i]);
			count++;
		}
		else if (isupper(string[i])) {
			alphaString2[count] = tolower(string[i]);
			count++;
		}
	}
	alphaString2[count] = '\0';

	strcpy(convertedString, alphaString1);
	strcat(convertedString, digitString);

	printf("��ҹ��ڸ� �ٲ� ���ڵ��� %s\n", alphaString2);
	printf("���ڵ�� ���ڵ�� ��迭�� ���ڿ��� %s\n", convertedString);

}