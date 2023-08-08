#include "main.h"

/**
 * append_text_to_file - This appends text at the end of a file
 * @filename: Pointes to the name of a file
 * @text_content: This is the string to add at the end of the file.
 *
 * Return: if function fails or filename NULL.
 * No write permisson if file does not exist --1
 * otherwise -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(0);

	return (1);
}

