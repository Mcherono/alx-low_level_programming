#include<stdio.h>
/**
*main - execution begins here
*Return: returns 0
*/
int main(void)
{
	int ones;
	int tens;

	for (ones = 0; ones <= 9; ones++)
	{
		for (ones = 0; ones <= 9; ones++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == 9 && tens == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
