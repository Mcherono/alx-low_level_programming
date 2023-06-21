#include "main.h"
/**
*times_table - prints the 9 times table
*Return: return empty output
*/
void times_table(void)
{
	int a, b, c, n, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (c > 9)
			{
				n = c % 10;
				d = (c - n) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(n + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
