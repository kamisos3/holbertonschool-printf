#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * handle_format - Processes format specifiers
 * @format: String
 * @args: va_list arguments
 *
 * Return: Number of characters in the format specifier
 */
int handle_format(char format, va_list args)
{
	int count = 0;

	if (format == 'c')/*For character outputs*/
	{
		char c = (char)va_arg(args, int);

		count += _putchar(c);
	}
	else if (format == 's')/*Handles string*/
	{
		char *str = va_arg(args, char *);

		count += print_string(str);
	}
	else if (format == '%')
	{
		count += _putchar('%');
	}
	else if (format == 'd' || format == 'i')/*Handles num and int*/
	{
		int num = va_arg(args, int);
		count += print_number(num);
	}

	else
	{
		count += _putchar('%');
		count += _putchar(format);
	}
	return (count);
}
