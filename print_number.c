#include <limits.h>
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

	if (num == INT_MIN)/*Smallest value*/
	{
		count += print_string("-2147483648");
/*Calls print_string with string above*/
		return (count);
	}

	if (num < 0)/*Verify if num is less than 0, is negative*/
	{
		count += _putchar('-');/*Puts negative sign*/
		num = -num;/*Makes num positive*/
	}
	if (num / 10) /*For higher digits*/
		count += print_number(num / 10);
/*It removes last digit in recursive call by dividing*/
	count += _putchar((num % 10) + '0');
/*Extracts last digit of num to conver in ASCII character*/
	return (count);
}
