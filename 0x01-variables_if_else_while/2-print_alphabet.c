#include<stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints alpha
 *
 * Return : Always o (Success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
