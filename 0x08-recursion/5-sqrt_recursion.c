#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - A function that returns the natural
 * square root of a number
 * @n: The natural square root of a number
 * Return: The result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (n);
	return (_sqrt_recursion(n, 1));
}
