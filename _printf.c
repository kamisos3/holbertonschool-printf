#include <unistd.h>
#include "main.h"
/**
 * _printf - Produces output depending on format
 * @format: string composed of 0 or more directives
 * Return: Number of characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int *str;

	va_start(args, format);

	if (*format == '%')
	{
		format++;
		switch (*format)
		{
			case 'c':/*Handles characters*/
				write(1, &va_arg(args, int) 1);
				count++;
				break;
			case 's':/*Handles strings*/
				str = va_arg(args, char *);
				while (*str)
				{
					write(1, str++, 1);
					count++;
				}
				break;
			case '%':/*Literal % character cases*/
				write(1, "%", 1);
				count++;
				break;
		}
	}
	write(1, format, 1);
	count++;
}
format++;
}
return (count);
va_end(args);
}
