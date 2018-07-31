#include "holberton.h"
#include <math.h>

/**
 * u_print_number - prints a unsigned number
 * @n: variable containing an integer value
 *
 * Return: count (int)
 */

int u_print_number(unsigned int n)
{
	int m = 1, num = n, count = 0;

	while (num / 10)
	{
		num /= 10;
		m *= 10;
	}
	while (m > 0)
	{
		num = n / m;
		m /= 10;
		_putchar(num % 10 + '0');
		count++;
	}
	return (count);
}
