#include "main.h"

/**
 * main - entry point
 *
 * Description : Prints alphabet
 *
 * Return : Always 0 (success)
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a' ; l <= 'z' ; l++)

		_putchar(l);

	_putchar('\n');

}
