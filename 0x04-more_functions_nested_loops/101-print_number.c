#include <stdio.h>
#include <math.h>
/**
 * print_number - This is the function name.
 * @n: this is the function parameter.
 * Description: function that prints an integer.
 * Return: 0
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('_');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}