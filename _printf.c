#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - Prints output accotding to format
 * @format: list of all argument types
 *
 *
 * Return: Output according to format
 */
int _printf(const char *format, ...)
{
	va_list args;/*Inititalizing argument list*/
	int count = 0;


	va_start(args, format);/*Initializes argument lis*/

	while (*format)
	{
		if (*format == '%') /*If % is found*/
		{
			format++;/*Moves pointer to next character*/
			if (*format == 'c') /*Manages %c, characters*/
				count += _putchar(va_arg(args, int));
			else if (*format == 's')/*Manages strings %s*/
				count += print_string(va_arg(args, char *));
			else if (*format == '%') /*Mananages characters %%*/
				count += _putchar('%');
		}
		else
		{
			count += _putchar(*format); /*Prints '%' if format is invalid*/
		}
		format++;
	}
	else
}
return(count);
va_end(args);
}
