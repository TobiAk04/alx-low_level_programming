#include <stdio.h>
#include <stdlib.h>
/**
 * main - print base ten bumber
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar((num % 10) + '0');
		num++;
	}

	putchar('\n');
	return (0);
}
