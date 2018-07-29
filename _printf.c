#include "holberton.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
	char *string;
	int i, count;
	va_list val;

	va_start(val, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			switch(format[i + 1])
			{
				case 'c':
			  		i++;
					_putchar(va_arg(val, int));
					count++;
				case 's':
					i++;
					string = va_arg(val, char*);
					_puts(string);
					count += str_len(string);
				default:
					i++;
					putchar(format[i]);
					count++;
			}
		}
		else
			putchar(format[i]);
	}
	return (count);
}
