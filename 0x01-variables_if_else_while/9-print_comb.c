#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Using main function;
 *
 *Description: This program print numbers from 0 - 9
 *Return: 0
 */
int main(void)
{
	int m;

	for (m = 48; m <= 57 ; m++)
	{
		putchar(m);
		if (m != 57)
		{
			putchar(',');
			putchar(' ');
	}
	}
	putchar('\n');
		return (0);
}
