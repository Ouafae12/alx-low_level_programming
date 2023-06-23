#include "main.h"
/**
 * _isupper - A function that checks for uppercase character
 * Return: 1 if its uppercase, 0 if its not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
