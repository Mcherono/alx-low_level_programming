#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*malloc_checked - function that allocates memory using malloc
*@b: length to allocate in the memory
*Return: Returns a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
