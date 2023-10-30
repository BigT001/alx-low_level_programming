#include "main.h"

/**
 * create_file - creats a file.
 * @filename: points file to create.
 * @text_content: This points to string that will write to the file.
 *
 * Return: if the function fails --1 if not -1.
 */

int create_file(const char *filename, char *text_content)
{
	int of, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	of = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(of, text_content, len);

	if (of == -1 || w == -1)
		return (-1);

	close(of);

	return (1);
}

