#include "main.h"
/**
 * print_number - For number inputs
 * @num: integer, number to print
 *
 *
 * Return: Number of characters printed
 */
int print_number(int num)
{
	int count = 0;

	if (num < 0)
	{
		count += _putchar('-');
		num = -num;/*Makes num positive*/
	}
	if (num / 10) /*For higher digits*/
		count += print_number(num / 10);
	count += _putchar((num % 10) + '0');

	return (count);
}
