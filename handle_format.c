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
	int count = 0;/*Initializes count, that checks character total*/

	if (format == 'c')/*Handles characters*/
	{
		char c = (char)va_arg(args, int);

		count += _putchar(c);
	}
	else if (format == 's')/*Handles string input*/
	{
		char *str = va_arg(args, char *);/*Initializes pointer str*/

		count += print_string(str);
	}
	else if (format == '%')/*Handles '%' character*/
	{
		count += _putchar('%');
	}
	else if (format == 'd' || format == 'i')/*Integer and number inputs*/
	{
		int num = va_arg(args, int);/*Initializes int num*/

		count += print_number(num);
	}
	else
	{
		count += _putchar('%');
		count += _putchar(format);
	}
	return (count);
}
