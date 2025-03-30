#include <unistd.h>
#include <stdarg.h>
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

	if (str == NULL)/*Verifies if string is null*/
		str = "(null)"; /*Prints if string is null*/

	while (*str)
	{
		count += write(1, str, 1);
/*Calls output and updated character count*/
		str++;
	}
	return (count);
}
