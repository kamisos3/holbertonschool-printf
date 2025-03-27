#include <unistd.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - Custom implemematation of printf
 *@format: Format string with specifiers
 *
 *Return: Number of characters printed
 */
int _print(const char *format, ...)
{
	va_list args;
	int count = 0;
	char *str;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c': /*Handles characters */
					count += _putchar(va_arg(args, int));
					break;
				case 's': /* Handlesstrings */
					str = va_arg(args, char *);
					if (!str)
						str = "(null)"; /*Handle NULL string */
					while (*str)
						count += _putchar(*str++);
					break;
				case '%': /* Literal % character */
					count += _putchar('%');
					break;
				default: /* IF unknown specifier, print % and the character */
					count += _putchar('%');
					count += _putchar(*format);
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
