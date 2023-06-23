#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers from 0 up to 9
 * Description: Do not print 2 and 4
 * Return: The numbers from 0 up to 9
 */
void print_most_numbers(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
	if (a == 2 || a == 4)
	{
	continue;
	}
	else
	{
	_putchar(a + '0');
	}
	}
	_putchar('\n');
}
