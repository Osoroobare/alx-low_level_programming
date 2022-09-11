#include <stdio.h>

/**
 * main - print "all possible combinations of two digits
 * numbers be separated by , then followed by space
 * using putchar
 * Return: Always 0 (Successfu)
 */
int main(void)
{
	int number1, number2;

	for (number1 = 48; number2 <= 57; number1++)
	{
		for (number2 = 48; number2 <= 57; number2++)
		{
			putchar(number1);
			putchar (number2);

			if (number1 != 57 ||  number2 != 57)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
