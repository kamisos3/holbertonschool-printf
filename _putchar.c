#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)/*Function helper*/
{
	return (write(1, &c, 1));
}

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

