#include <stdio.h>

/**
 *  main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *  followed by a new line
 *  numbers must be separated by a comma, followed by space
 *  Return: Always 0 (Success)
 */
int main(void)
{
	long int a, b, c, next;

	a = 1;
	b = 2;
	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		} else
		{
			printf("%ld\n", b);
		}
		next = b + c;
		b = c;
		c = next;
	}
	return (0);
}
