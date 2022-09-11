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

	for (number1 = 0; number2 <= 9; number1++)
	{
		for (number2 = number1 + 1; number2 <= 10; number2++)
		{
			putchar((number1 % 10) + '0');
			putchar ((number2 % 10) + '0');
			if (number1 == 8 && number2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
