#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string on success, NULL on error
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int a, length;

	a = 0;
	length = 0;
	if (str == NULL)
		return (NULL);
	while (str[length])
		length++;
	duplicate = malloc(sizeof(char) * (length + 1));
	if (duplicate == NULL)
		return (NULL);
	while ((duplicate[a] = str[a]) != '\0')
		a++;
	return (duplicate);
}
