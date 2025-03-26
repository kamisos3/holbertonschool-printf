#include <stddef.h>
#include "main.h"
#include <stdarg.h>
/**
 *_printf - Custom implementation of printf
 *@format: Format strign with specifiers
 *Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')/*check for format specifier*/
		{
			ptr++;
			if
				(*ptr == 'c')
					count += _putchar(va_arg(args, int));

			else if (*ptr == 's')

				count += print_string(va_arg(args, char *));

			else if (*ptr == '%')

				count += _putchar('%');
			{
				count += _putchar('%');
				count += _putchar(*ptr);
			}
		}
		else
			count += _putchar(*ptr);
	}
	va_end(args);
	return (count);
}
