#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned
 * @b: char string
 * Return: converted decimal number and  0 if an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int tal, poer;
	int lin;

	if (b == NULL)
		return (0);

	for (lin = 0; b[lin]; lin++)
	{
		if (b[lin] != '0' && b[lin] != '1')
			return (0);
	}

	for (poer = 1, tal = 0, lin--; lin >= 0; lin--, poer *= 2)
	{
		if (b[lin] == '1')
			tal += poer;
	}

	return (tal);
}
