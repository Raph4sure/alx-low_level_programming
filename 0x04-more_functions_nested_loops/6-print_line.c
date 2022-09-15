#include "main.h"
/**
 * void print_line - This is the function name
 * @n: This is the function parameter
 * Description: function that draws a straight line in the terminal.
 * Return: 0
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
