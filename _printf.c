#include "holberton.h"
#include <stdarg.h>

/**
  * _printf - similar to printf from stdio.h
  * @format: character string
  * Return: number of string printed
  */

int _printf(const char *format, ...)
{
	char *string;
	int i, len, count = 0;
	va_list val;

	va_start(val, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					i++;
					_putchar(va_arg(val, int));
					count++;
					break;
				case 's':
					i++;
					string = va_arg(val, char*);
					len = _strlen(string);
					if (string[len] != 0)
						return (-1);
					_puts(string);
					count += _strlen(string);
					break;
				case '%':
					i++;
					_putchar(format[i]);
					count++;
					break;
				default:
					return (-1);
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
