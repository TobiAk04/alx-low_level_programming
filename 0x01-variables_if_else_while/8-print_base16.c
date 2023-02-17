#include <stdio.h>
#include <stdlib.h>
/**
 * main -  print base 16
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int num = 0;
	char la = 'a';

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;

	}
	while (la <= 'f')
	{
		putchar(la);
		la++;
	}
	putchar('\n');
	return (0);
}
