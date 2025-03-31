#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 *print_string - Print a string of characters and special characters
 *@str: the string to print
 *
 *Return: number of characters printed
 */
int print_string(char *str)
{
	int count = 0;
	char hex[5];/*Buffer to hold hex digits*/

	if (str == NULL)/*Verifies if string is null*/
		str = "(null)"; /*Prints if string is null*/

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			hex[0] = '\\';
			hex[1] = 'x';
			hex[2] = (*str / 16) < 10 ? (*str / 16) + 0 : (*str / 16) - 10 + 'A';
			hex[3] = (*str % 16) < 10 ? (*str % 16) + 0 : (*str % 16) - 10 + 'A';
			hex[3] = '\0';

			count += write(1, hex, 4);
		}
		else
			count += write(1, str, 1);
		/*Calls output and updated character count*/
		str++;
	}
	return (count);
}
