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

	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			if (*format == 'c')
			{
				char c = (char)va_arg(args, int);

				count += _putchar(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				count += print_string(str);
				while (*str)
				{
					count += write(1, str, 1);
					str++;
				}
			}
			else if (*format == '%')
			{
				count += _putchar('%');
			}
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
