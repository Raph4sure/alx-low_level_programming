#include "main.h"
/**
 * _print_sign - This is the function
 * @n: contains the value to be compared
 * Description - The program prints the sign of a number.
 * Return: 0
 */
int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return  ('1');
	}
}
