#include <unistd.h>
#include "main.h"
/**
 * print_octal - Prints octal unsigned int
 * @num: unsigned int octal
 *
 *
 * Return: Octals to count
 */
int print_octal(unsigned int num)
{
	int count = 0;

	if (num / 8)
		count += print_octal(num / 8);

	count += _putchar((num % 8) + '0');

	return (count);
}
