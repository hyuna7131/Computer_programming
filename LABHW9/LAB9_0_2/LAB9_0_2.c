#include <stdio.h> 
#include <ctype.h> //문자처리 함수 사용을 위해
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