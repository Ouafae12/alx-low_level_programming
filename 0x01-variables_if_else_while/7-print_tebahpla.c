#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the lowercase alphabet in reverse
 * return: 0
 */
int main(void)
{
char rev;
for (rev = 'z'; rev >= 'a'; rev--)
putchar(rev);
putchar('\n');
return (0);
}
