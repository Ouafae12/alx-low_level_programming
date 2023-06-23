#include "main.h"
/**
 * print_line -  a function that draws a straight line in the terminal
 * @n: is the number of _ character should be printed
 */
void print_line(int n)
{
	int LnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (LnChr = 0; LnChr <= n; LnChr++)
			_putchar('_');
		_putchar('\n');
	}
}
