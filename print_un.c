#include <unistd.h>
#include "main.h"
/**
 * print_un - Prints unsigned intgers
 * @num: Unsigned int
 *
 *
 * Return: Unsigned integers to count
 */
int print_un(unsigned int num)
{
	int count = 0;

	if (num / 10)

	count += print_un(num / 10);

	count += _putchar((num % 10) + '0');

	return (count);
}
