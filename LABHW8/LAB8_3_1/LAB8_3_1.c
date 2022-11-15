#include <stdio.h> 
void stringCopy(char* s1, const char* s2)// *s2�� �ٲ��������Ƿ� const�� ���ϼ�
{
	while (*s2) //== while (*s2 != '\0')  //while(*s2++)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}

// stringLength �Լ� ���� �߰�
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
	printf("ù��° ������ copied�� ���̿� ���� %d�� %s�̴�.\n", stringLength(copied), copied);
	stringCopy(copied, data2);
	printf("�ι�° ������ copied�� ���̿� ���� %d�� %s�̴�.\n", stringLength(copied), copied);
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