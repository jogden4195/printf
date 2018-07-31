#include "holberton.h"

/**
 * dectooct - prints out a decimal num in oct form
 * @n: the number we want to print out in dec
 * Return: count of how many chars were printed.
 */
int dectooct(unsigned int n)
{
	int num = n, i = 0, j, count = 0;
	char printer[1000];

	while (num != 0)
	{
		printer[i] = num % 8;
		num = num / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(printer[j] + '0');
		count++;
	}
	return (count);
}
