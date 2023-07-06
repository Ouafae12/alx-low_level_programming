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
	int sqrt = i*i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
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
