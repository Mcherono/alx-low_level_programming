#include "main.h"
/**
*print_binary - it prints the binary equivalent of a decimal number
*@m: number to print in binary
*/
void print_binary(unsigned long int m)
{
	int i, count = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;

		if (curr & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
