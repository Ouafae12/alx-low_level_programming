#include "main.h"
#include <stdio.h>
/**
 * isit_prime - check if the input is a prime number
 * @n: The input
 * @i: The iteration times
 * Return: 1 if its a prime 0 if its not
 */
int isit_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (isit_prime(n, i + 1));
}
/**
 * is_prime_number - A function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: The input
 * Return: 1 if its a prime 0 if its not
 */
int is_prime_number(int n)
{
	return (isit_prime(n, 1));
}
