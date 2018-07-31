#include "holberton.h"
#include <stdlib.h>

/**
  * binary - converts decimal to binary
  * n: decimal number
  * Return: number of characters printed
  */

int binary(int n)
{
	char res[1000];
	int i, count;

	for (i = 0; n > 0; i++)
	{
		res[i] = n % 2;
		n /= 2;
	}
	for (count = 0, i--; i >= 0; i--)
	{
		_putchar(res[i] + '0');
		count++;
	}
	return (count);
}
