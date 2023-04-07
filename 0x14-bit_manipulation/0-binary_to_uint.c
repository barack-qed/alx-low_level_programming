#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - change a binary number to an  unsigned integer
 * @b: string with the binary number
 *
 * Return: number chaged
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			num <<= 1;
			num += (*b - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}

	return (num);
}
