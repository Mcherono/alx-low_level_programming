#include "main.h"
/**
*create_file - Creates a file.
*@file: A pointer to the name of the file to create.
*@text: A pointer to a string to write to the file.
*Return: I returns --1 if the function failsf the function fails - -1.
*/
int create_file(const char *file, char *text)
{
	int f, n, length = 0;

	if (file == NULL)
		return (-1);

	if (text != NULL)
	{
		for (length = 0; text[length];)
			length++;
	}

	f = open(file, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(f, text, length);

	if (f == -1 || n == -1)
		return (-1);

	close(f);

	return (1);
}
