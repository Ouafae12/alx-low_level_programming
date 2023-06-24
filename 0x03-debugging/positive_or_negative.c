#include "main.h"
/**
 * positive_or_negative - tests if the number is negative or positive
 * @i: input
 * Return: Always 0
 */
void positive_or_negative(int i)
{
if (i > 0)
printf("%i is positive\n", i);
else if (i < 0)
printf("%i is negative\n", i);
else
printf("%i is zero\n", i);
return (0);
}
