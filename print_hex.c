#include <unistd.h>
#include "main.h"
/**
 * print_hex - Prints upper and lower hexadecimal
 * @num: Hexadecimal unsigned int
 * @uppercase: Uppercase hexadecimals
 *
 * Return: Hexidecimal to count
 */
int print_hex(unsigned int num, int uppercase)
{
	int count = 0;
	char hex_chars[] = "0123456789abcdef";
	char hex_chars_upper[] = "0123456789ABCDEF";

	if (num / 16)
		count += print_hex(num / 16, uppercase);

	if (uppercase)
		count += _putchar(hex_chars_upper[num % 16]);
	else
		count += _putchar(hex_chars[num % 16]);

	return (count);
}
