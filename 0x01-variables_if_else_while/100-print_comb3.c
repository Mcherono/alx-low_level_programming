#include<stdio.h>
/**
*main - execution begins here
*Return: returns 0
*/
int main(void)
{
	int n;
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if (!((n == m) || (m > n)))
			{
				putchar(m);
				putchar(n);
				if (!(n == '9' && m == '8'))
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
