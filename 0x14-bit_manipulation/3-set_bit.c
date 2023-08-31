#include "main.h"

/**
 * set_bit - sets value of bit to 1 for  a given index
 * @n: decimal number passed by the linker
 * @index: index position to change,from 0
 * Return: 1 if it worked, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 64)
		return (-1);

	for (m = 1; index > 0; index--,  *= 2)
		;
	*n += m;

	return (1);
}
