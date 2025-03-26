#include <stddef.h>
#include "main.h"
/**
 *print_string - Print a string of characters
 *@str: the string to print
 *
 *Return: number of characters printed
 */
int print_string(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)"; /* Handle NULL string */

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}

