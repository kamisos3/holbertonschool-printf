#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - Produces output depending on format
 * @format: string composed of 0 or more directives
 * Return: Number of characters
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				_putchar(va_arg(args, int));
			}
			else if (*format == 's')
			{
				_putchar(va_arg(args, int));
			}
			_putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (0);
}
