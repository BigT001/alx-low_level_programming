#include "main.h"

/**
 * append_text_to_file - This will append text to the end of a file.
 * @filename: This polints to bthe name of the file.
 * @text_content: This is the string that will add to the end of the filw.
 * Return: i on success and -1 if fails
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

	close(o);

	return (1);
}

