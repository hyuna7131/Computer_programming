#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_STRING 81 
#define BOOL int 
#define TRUE 1 
#define FALSE 0 

// Palindrome �˻�
BOOL isPalindrome(char s[]);

int main(void)
{
	char str[MAX_STRING];
	printf("* Palindrome üũ\n\n");
	printf("���ڿ� �Է�(���ڼ� %d ����): ", MAX_STRING);
	scanf("%s", str);
	if (isPalindrome(str)) // Palindrome �˻�
		printf("\"%s\" is a Palindrome\n\n", str); // ���� ����Ϸ��� \���� ���
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);
	return 0;
}

BOOL isPalindrome(char s[])
{
	//���ڿ� s��(����� s�� ������������, �̴� 2�б⶧ ����)
	//üũ�ؼ� palindrome�̸� TRUE���� palindrome�ƴϸ� FALSE���� return�Ѵ�.

	int i, count=0;

	for (i = 0; s[i] != '\0'; i++) 
		count++;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != s[count - 1 - i])
			return 0;
	}
	return 1;
}