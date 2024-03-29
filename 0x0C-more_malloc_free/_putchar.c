#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @C - character to printi
 *
 * Return : success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
