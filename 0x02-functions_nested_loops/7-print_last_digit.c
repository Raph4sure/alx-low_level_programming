#include "main.h"
#include <stdio.h>
/**
 * _print_last_digit - This is the function
 * @n: contains the value to be compared
 * Description - The program prints the last digit of a no.
 * Return: 0
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (-1 * (n % 10));
		_putchar (last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit =  (n %  10);
		_putchar (last_digit + '0');
		return (last_digit);
	}
}
