#include <stdio.h> 
#include <ctype.h> //����ó�� �Լ� ����� ����
void main()
{
	char c;
	printf("Enter characters(^Z for exit):\n");   //^Z =>ctr + z == EOF
	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}