#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	long x, larf;
	long num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
	if (num % x == 0)
	{
	larf = num / x;
	}
	}
	printf("%ld\n", larf);
	return (0);
}
