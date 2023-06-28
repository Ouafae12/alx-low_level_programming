#include "main.h"
/**
 * swap_in - a function that swaps the values of two integers
 * @a: The first entry
 * @b: The second entry
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
