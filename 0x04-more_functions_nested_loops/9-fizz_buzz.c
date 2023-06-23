#include "main.h"
#include <stdio.h>
/**
 * main - print a fizz-buzz program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
	if ((x % 3 == 0) && (x % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (x % 5 == 0)
	{
	printf("buzz");
	}
	else if (x % 3 == 0)
	{
	printf("fuzz")
	}
	else
	{
	printf("%d", x);
	}
	if (x != 100)
	{
	printf(" ");
	}
	}
	printf('\n');
	return (0);
}
