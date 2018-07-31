#include "holberton.h"
#include <stdlib.h>

/**
  * binary - converts decimal to binary
  * n: decimal number
  * Return: number of characters printed
  */

int binary(unsigned int n)
{
	char res[1000];
	int i, count = 0;

	if (n > 1)
	{
		for (i = 0; n > 0; i++)
		{
			res[i] = n % 2;
			n /= 2;
		}
		for (i--; i >= 0; i--)
		{
			_putchar(res[i] + '0');
			count++;
		}
	}
	else if (n == 1)
	{
		_putchar('1');
		count++;
	}
	else
	{
		_putchar('0');
		count++;
	}

	return (count);
}
