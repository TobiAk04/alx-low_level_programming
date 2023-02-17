#include <stdio.h>
#include <stdlib.h>
/**
 * main - return upper and lower case letter
 *
 * Return: Always 0 (Succss)
 *
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
