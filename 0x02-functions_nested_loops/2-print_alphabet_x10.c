#include "main.h"
/**
 * print_alphabet_x10 - This prints the alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int count;

	count = 0;
	while (count < 10)
	{
		for (alhabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		count++;
		_putchar('\n');
	}

	}
