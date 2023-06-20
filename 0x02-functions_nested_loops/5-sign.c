#include "main.h"
/**
*print_sign - prints the sign of a number
*@n: the number to check
*Return: 1 and prints + if n is greater than 0
*0 if n is 0, -1 if n is less than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchr('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchr('0');
        	return (0);
	}
	else
	{
        	return (-1);
	}
}
