#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - This will read text files to STDOUT.
 * @filename: This is the text file that will be read.
 * @letters: This is the number of letters that will be read.
 * Return: 0 if function fails or file name is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t of;
	ssize_t w;
	ssize_t rf;

	of = open(filename, O_RDONLY);
	if (of == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	rf = read(of, buf, letters);
	w = write(STDOUT_FILENO, buf, rf);

	free(buf);
	close(of);

	return (w);
}

