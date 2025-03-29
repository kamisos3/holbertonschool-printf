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

	switch (format)
	{
		case'c':/*For character outputs*/
			count += _putchar(va_arg(args, int));
			break;
		case 's':/*Handles string*/
			count += _putchar(va_arg(args, char *));
			break;
		case 'd':/*Handles decimals and int*/
		case 'i':
			count += print_number(va_arg(argsn int));
			break;
		case 'u':
			break;
		case 'x':
		case 'X':
			break;
		case '%':
			count += _putchar('%');
			break;
		default:
			count += _putchar('%');
			count += _putchar(format);
			break;
	}
	return (count);
}
