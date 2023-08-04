#include "main.h"

/**
 * print_binary - prints binary representation
 * @n: the number to print in binary form
 */
void print_binary(unsigned long int n)
{
	unsigned long int t;
	int r;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (t = n, r = 0; (t >>= 1) > 0; r++)
		;

	for (; r >= 0; r--)
	{
		if ((n >> r) & 1)
			printf("1");
		else
			printf("0");
	}
}
