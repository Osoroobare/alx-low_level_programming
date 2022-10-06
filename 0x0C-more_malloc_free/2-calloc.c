#include<stdlib.h>
#include "main.h"

/**
 * _memset - copy char
 * @s: memory to be filled
 * @b: input character to be copied
 * @n: number of bytes to copy
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	_memset(s, 0, (nmemb * size));
	return (s);
}
