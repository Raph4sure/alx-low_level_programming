#include "main.h"
#include <stdio.h>
/**
 * _abs - This is the function
 * @n: contains the value to be compared
 * Description - The program prints the absolute value of a number.
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
