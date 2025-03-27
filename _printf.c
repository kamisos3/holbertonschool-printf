#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 *_printf - Custom implementation of printf
 *@format: Format string with specifiers
 *Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(1, &c, 1);
					count++;
					break;
				case 's':
					{
						char *str = va_arg(args, char *);

						if (!str) str = "(null)'";
						while (*str)
						{
							_putchar(1, str, 1);
							count++;
							str++;
						}
						break;
					}
				case '%':
					_putchar(1, '%', 1);
					count++;
					break;
			}
			default:
			_putchar(1, format, 1);
			count++;
		}
	}
	else
	{
		_putchar(1, format, 1);
		count++;
	}
	format++;
}
va_end(args);
return (count);
}
