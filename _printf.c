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
	char *string;
	int i, len,  count = 0;
	va_list val;

	va_start(val, format);
	/*
	 *while (format[j] != '\0')
	 *{
	 *	if (format[j] == '%')
	 *	{
	 *		if (format[j + 1] != '%')
	 *			j++;
	 *		else if (format[j + 1] != 'c' || format[j + 1] != 's')
	 *			return (-1);
	 *		else if (format[j + 1] != 'd' || format[j + 1] != 'i')
	 *			return (-1);
	 *	}
	 *	j++;
	 *}
	*/
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
