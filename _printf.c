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
	char *str;

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
			if (*format == 'c')
			{
				char c = (char)va_arg(args, int);

				count += write(1, &c, 1);
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(null)";
				while (*str)
				{
					count += write(1, str, 1);
					str++;
				}
			}
			else if (*format == '%')
			{
				count += write(1, "%", 1);
			}
		}
		else
		{
			count += write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (count);
}
