#include "main.h"
/**
 * _puts - function to print string
 * Description - prints a tring, followed by a new line
 * @str: function that accepts an input saved into str
 * Return: Always 0 (Success)
 *
 */
void _puts(char *str)
{
	int index;

	for(index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
