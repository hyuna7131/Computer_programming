#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char id[50];
	char year[5];
	char* gender;

	printf("주민등록번호 입력<'-'포함>: ");
	gets(id);

	year[0] = '1'; 
	year[1] = '9';
	year[2] = '\0';
	printf("당신은 %s년도 생이군요\n", strncat(year, id, 2));
	
	gender = strtok(id, "-");
	gender = strtok(NULL, "-");

	if (*gender == '1') {
		printf("남자분이시군요.\n");
		printf("평균 수명 77를 더하면 %d까지 산다고 계산됩니다.\n", atoi(year) + 77);
	}
	else if (*gender == '2') {
		printf("여자분이시군요.\n");
		printf("평균 수명 84를 더하면 %d까지 산다고 계산됩니다.\n", atoi(year) + 84);
	}
}