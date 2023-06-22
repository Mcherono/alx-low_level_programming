#include "main.h"
/**
*print_most_numbers -  checks for a digit
*Return: Always 0
*/
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 50)
		{
			if (n != 52)
			{
				_putchar(n);
			}
		}
	}
	_putchar('\n');
}
