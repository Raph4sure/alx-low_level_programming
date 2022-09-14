#include <stdio.h>

/**
 * main - This is the Entry
 * Description - Program that computes the sum of all multiples of 3 0r 5.
 * Return: 0
 */
int main(void)
{
	int start_num, end_num, total;

	end_num = 1024;
	total = 0;
	for (start_num = 0; start_num < end_num; start_num++)
	{
		if ((start_num % 3 == 0) || (start_num % 5 == 0))
		{
			total = total + start_num;
		}
		else
		{
			continue;
		}
	}
	printf("%d", total);
	printf("\n");
	return (0);

}
