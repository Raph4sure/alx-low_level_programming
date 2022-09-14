#include <stdio.h>
/**
 * main - This is the entry
 * Description: program that prints the 50 Fibonacci nos, starting with 1 & 2.
 * Return: 0
 */
int main(void)
{
	int  count = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}
		k = j;
		j += i;
		i = k;
		count++;
	}
	return (0);
}
