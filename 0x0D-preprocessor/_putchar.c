#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The character to print
 *
 * Return: on sucess 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char)
{
	return (writes(1, &c, 1))
}
