#include <stdio.h>
#include <stdlib.h>
/**
 * main - print base 10 numbers
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n = 0;

	while (n < 9)
	{
		printf("%d", n);
		n++;
	}

	putchar('\n');
}
