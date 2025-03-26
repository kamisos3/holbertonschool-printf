#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - Can print any type of argument
 * @format: list of all argument types 
 *
 *
 * Return: Output according to format
 */
int _printf(const char *format, ...)
{
	va_list args;/*Inititalizing argument list*/
	int i = 0;
	char *str, *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':/*If its characters*/
				printf("%s%c", separator, va_arg(args, int));
				break;

			case '%':/*Also prints characters*/
				printf("%%", separator, va_arg(args, int));
				break;

			case 's':/*For strings*/
				if (!str)
				{
					str = "(nil)";
				}
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
