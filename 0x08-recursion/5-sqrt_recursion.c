#include "main.h"
#include <stdio.h>
/**
 * square - Check if n has a natural square root
 * @n: The input
 * @i: number to check
 * Return: The result
 */
int square(int n, int i)
{
	if (n * n == i)
		return (n);
	if (n * n > i)
		return (-1);
	return (square(n, i + 1));
}
/**
 * _sqrt_recursion - A function that returns the natural
 * square root of a number
 * @n: The natural square root of a number
 * Return: The result
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
