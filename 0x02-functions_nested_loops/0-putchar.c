#include "main.h"
#include <string.h>

/**
 * main - Entry point
 * prints _putchar followed by a new line
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}

