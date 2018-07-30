#include "holberton.h"

/**
 * print_number - prints a number
 * @n: variable containing an integer value
 */

int print_number(int n)
{
	int m = 1, num = n;

	while (num / 10)
	{
		num /= 10;
		m *= 10;
	}
	if (n < 0)
		_putchar('-');

	while (m > 0)
	{
		num = n / m;
		m /= 10;
		if (n < 0)
			_putchar(num % 10 * -1 + '0');
		else
			_putchar(num % 10 + '0');
	}
}
