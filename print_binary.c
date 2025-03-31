#include <unistd.h>
#include "main.h"
/**
 * print_binary - Makes unsigned int to binary, and prints it
 * @num: Unsigned integer
 *
 * Return: Number of characters printed
 */
int print_binary(unsigned int num)
{
	int count = 0;
	int i, started = 0;
	char binary[32];/*Buffer for storing binary digits*/

	if (num == 0)
		return (_putchar('0'));

	for (i = 31; i >= 0; i--)/*For bit extraction*/
	{
		binary[i] = (num & 1) + '0';/*Stores 0 or 1*/
		num >>= 1;
	}
	for (i = 0; i < 32; i++)/*Prints zeros*/
	{
		if (binary[i] == '1')
			started = 1;

		if (started)
			count += _putchar(binary[i]);
	}
	return (count);
}
