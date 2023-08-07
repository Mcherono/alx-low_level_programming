#include "main.h"
#include <stdlib.h>
/**
*read_textfile- Read text file print to standard output.
*@file: text file being read
*@n: number of letters to be read
*Return: actual number of bytes read and printed
*/
ssize_t read_textfile(const char *file, size_t n)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * n);
	t = read(fd, buf, n);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
