#include "main.h"
/**
*set_bit - sets value of a bit to 1
*@a: decimal number passed bymlinker
*@index: index position to change from 0
*Return: 1 ifsuccessful and  -1 if  failr
*/
int set_bit(unsigned long int *a, unsigned int index)
{
	unsigned long int b;

	if (index > 64)
		return (-1);

	for (b = 1; index > 0; index--, b *= 2)
		;
	*a += b;

	return (1);
}
