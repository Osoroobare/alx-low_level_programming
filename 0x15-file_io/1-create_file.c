#include "main.h"

/**
 * create_file - A function which creates a file
 * @text_content: A NULL terminated string
 * @filename: name of file created
 * @text_content: A NULL terminated string
 * Return: 1 on success, -
 * 1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int f1, f2, len = 0;

	if (filename == NULL)
		return (-1);
	f1 = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (f1 < 0)
		return (-1);
	while (text_content && *(text_content + len))
		len++;
	f2 = write(f1, text_content, len);
	close(f1);
	if (f2 < 0)
		return (-1);
	return (1);
}
