#include "main.h"
#include <stdlib.h>
/**
  * array_range - A function that creates an array of integers
  * @min: The minimum value of the created array
  * @max: The maximum value of the created array
  * Return: integer value
  */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
