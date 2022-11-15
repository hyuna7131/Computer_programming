#include <stdio.h> 
void stringCopy(char* s1, const char* s2)// *s2는 바뀌지않으므로 const를 붙일수
{
	while (*s2) //== while (*s2 != '\0')  //while(*s2++)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}

// stringLength 함수 정의 추가
int stringLength(const char* s)
{
	int len=0;

	while (*s) {
		len++;
		s++;
	}

	return len;
}

int main(void)
{
	char copied[500];
	char data1[] = "abcde";
	char data2[] = "ABCDEFGH";
	stringCopy(copied, data1);
	printf("첫번째 복사후 copied의 길이와 값은 %d와 %s이다.\n", stringLength(copied), copied);
	stringCopy(copied, data2);
	printf("두번째 복사후 copied의 길이와 값은 %d와 %s이다.\n", stringLength(copied), copied);
}
/*
int main(void)
{
	char copied[500];
	char data1[] = "abcde";
	char data2[] = "ABCDEFGH";
	stringCopy(copied, data1);
	stringCopy(copied, data2);
}
*/