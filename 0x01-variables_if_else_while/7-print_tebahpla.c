#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabets in reverse
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ch = 'z';

	while (ch <= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
