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

	va_list args;/*Declares argument list*/
	int count = 0;

	va_start(args, format);/*Initializes argument list*/

	if (format == NULL)/*Verify if inputed format is NULL*/
	{
		return (-1);
	}

	while (*format)/*Deferencing pointer to get character*/
	{
		if (*format == '%')/*For character % cases*/
		{
			format++;

			if (*format == '\0') /*Handles last character %*/
			{
				return (-1);
			}
			count += handle_format(*format, args);
		}
		else
		{
		count += _putchar(*format);
/*count += returns character count to total ouput characters*/
		}

		format++;/*Moves pointer after the value its used*/
	}
	va_end(args);
	return (count);
}
