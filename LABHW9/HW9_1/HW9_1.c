#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[50]; // 입력되는 문자열을 저장
	char alphaString1[50]; // 입력문자열에서 알파벳만 저장
	char alphaString2[50]; // 대소문자를 바꿈
	char digitString[50];
	char convertedString[50]; // 문자들과 숫자들로 재배열한 문자열
	int i, j, count;

	printf("문자열을 입력하세요:");
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

	printf("문자들은 %s\n", alphaString1);
	printf("숫자들은 %s\n", digitString);

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

	printf("대소문자를 바꾼 문자들은 %s\n", alphaString2);
	printf("문자들과 숫자들로 재배열한 문자열은 %s\n", convertedString);

}