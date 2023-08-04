#include "main.h"
/**
*print_binary - prints binary representation
*@i: the number to print in binary form
*/
void print_binary(unsigned long int i)
{
	unsigned long int j;
	int k;

	if (i == 0)
	{
		printf("0");
		return;
	}

	for (j = n, k = 0; (j >>= 1) > 0; k++)
		;


	for (; k >= 0; k--)
	{
		if ((i >> k) & 1)
			printf("1");
		else
			printf("0");
	}
}
