#include <stdio.h>
/**
 *Main - prints"all possible combinations of two-digit numbers 
 * ranging between 0 and 99
 * Return: always 0 (successful)
 */
int main(void)
{
	int number1, number2;

	for (number1 = 0; number1 <= 98; number1++)
	{
		for (number2 = number1 + 1; number2 <= 99; number2++)
		{
			putchar((number1 / 10) + '0');
			putchar((number1 / 10) + '0');
			putchar(' ');
			putchar((number2 / 10) + '0');
			putchar((number2 / 10) + '0');
			if (number1 == 98 && number2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
