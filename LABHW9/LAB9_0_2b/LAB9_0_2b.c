#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;

	printf("Enter charactiers<^Z for exit>: \n");

	while ((ch = fgetc(stdin)) != EOF)
	{
		if (islower(ch))
			ch = toupper(ch);
		else if (isupper(ch))
			ch = tolower(ch);

		fputc(ch, stdout);
	}
}