#include "main.h"
/**
 * main - This is the Entry
 * Description: This progrma will prints alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)

	{
		_putchar (alpha);
	}
	_putchar ('\n');
}
