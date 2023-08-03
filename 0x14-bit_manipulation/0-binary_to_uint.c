#include "main.h"
/**
*binary_to_uint - converts a binary number to unsigned int
*@c: string containing the binary number
*Return: returns the converted number
*/
unsigned int binary_to_uint(const char *c)
{
	int i;
	unsigned int decimal = 0;

	if (!c)
		return (0);

	for (i = 0; c[i]; i++)
	{
		if (c[i] < '0' || c[i] > '1')
			return (0);
		decimal = 2 * decimal + (c[i] - '0');
	}

	return (decimal);
}
