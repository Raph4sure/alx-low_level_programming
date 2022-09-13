#include "main.h"
/**
 * _isalpha - This is the function
 * @c: contains the value to be compared
 * Description - This program check for lowercase character
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
