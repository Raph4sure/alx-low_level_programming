#include "main.h"

/**
 * array_range - create an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int *t;
	int len;

	if (min > max)
		return (NULL);
	len = 0;
	for (i = min; i <= max; i++)
		len++;

	t = malloc(sizeof(int) * len);
	if (t == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}
