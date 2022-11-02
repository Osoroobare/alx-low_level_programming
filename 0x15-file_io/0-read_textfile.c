#include "main.h"

/**
 *  read_textfile - reads a text file and prints the letters
 *  @filename: name of the file
 *  @letters: printed letters
 *  Return: numbers of letters. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int let;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);
	let = open(filename, O_RDONLY);
	if (let == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	nrd = read(let, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);
	close(let);
	free(buf);
	return (nwr);
}
