#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
  * _printf - similar to printf from stdio.h
  * @format: character string
  * Return: number of string printed
  */

int _printf(const char *format, ...)
{
	char *var;
	int i, len, count = 0;
	va_list val;


	if (format == NULL)
		return (-1);

	va_start(val, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					i++;
					var = va_arg(val, int);
					if (var == NULL)
						return (-1);
					_putchar(var);
					count++;
					break;
				case 's':
					i++;
					var = va_arg(val, char*);
					if (string == NULL)
						return (-1);
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
				case 'i':
				case 'd':
					i++;
					count += print_number(va_arg(val, int));
					break;
				case ' ':
					return (-1);
				case '\0':
					return (-1);
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
