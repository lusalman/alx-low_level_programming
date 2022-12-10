#include<stdio.h>

/**
 * main - Entry point
 *
 * Description : Prints lower case in reverse
 *
 * Return : Always o (success)
 */
int main(void)
{
	char d;

	for (d = 'z' ; d >= 'a' ; d--)
		putchar(d);

	putchar('\n');

	return (0);
}
