#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Using main function;
 *
 *Description: This program print if the number is positive, zero, or negative
 *Return: 0
 */
int main(void)
{
	char m;

	for (m = '0'; m <= '9' ; m++)
	{
		putchar(m);
	}
	for (m = 'a' ; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');
		return (0);
}
