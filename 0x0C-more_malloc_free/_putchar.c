#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character
 * @C - character to print 
 *
 * Return : success 1.
 * on error, -1 returnd, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
