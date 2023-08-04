#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0
 * @m: pointer to number to change
 * @index: position to change
 * Return: 1 if successful
 */
int clear_bit(unsigned long int *m, unsigned int index)
{
	unsigned long int k;
	unsigned int g;

	if (index > 64)
		return (-1);
	g = index;
	for (i = 1; g > 0; i *= 2, g--)
		;

	if ((*m >> index) & 1)
		*m -= k;

	return (1);
}
