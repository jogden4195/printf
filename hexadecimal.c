#include "holberton.h"

/**
 * dectohex - prints out a decimal num in hex form
 * @n: the number we want to print out in dec
 * Return: count of how many chars were printed.
 */
int dectohex(unsigned int n)
{
	int num = n, i = 0, j, remainder = 0, count = 0;
	char printer[1000];

	while (num != 0)
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			printer[i] = remainder + 48;
			i++;
		}
		else
		{
			printer[i] = remainder + 55;
			i++;
		}
		num = num / 16;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(printer[j]);
		count++;
		j--;
	}
	return (count);
}
