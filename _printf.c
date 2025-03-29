#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - Custom implemematation of printf
 *@format: Format string with specifiers
 *
 *Return: Number of characters printed
 */
int _printf(const char *format, ...)
{

	va_list args;
	int count = 0;

	va_start(args, format);

	if (format == NULL)
	{
		return (0);
	}

	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			count += handle_format(*format, args);
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
