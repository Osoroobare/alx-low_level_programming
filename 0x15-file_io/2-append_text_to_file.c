#include "main.h"

/**
 * append_text_to_file - Appends text.
 * @filename: file to append.
 * @text_content: NULL terminated string
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f1, res_write, length;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		f1 = open(filename, O_WRONLY | O_APPEND);
		if (f1 == -1)
			return (-1);
		length = 0;
		while (*(text_content + length) != '\0')
			length++;
		res_write = write(f1, text_content, length);
		if (res_write == -1)
		{
			close(f1);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(f1);
	return (1);
}
