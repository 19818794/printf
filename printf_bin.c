#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @val: argument to print.
 *
 * Return: number of binary digits printed.
 */
int printf_bin(va_list val)
{
	unsigned int num;
	/* To store binary representation of unsigned int in a 32-bit datum */
	unsigned int bin_num[32];
	int length, i, j;

	/* Get unsigned int from variable argument list */
	num = va_arg(val, unsigned int);
	/* Length of binary digits printed */
	length = 0;
	/* If num equal zero, print a single '0' character and count 1 */
	if (num == 0)
	{
		length++;
		_putchar('0');
	}
	/**
	 * If num > 0, store the remainder of the division by 2 in the array,
	 * and increment length for each binary digit.
	 */
	for (i = 0; num > 0; i++)
	{
		bin_num[i] = num % 2;
		num /= 2;
		length++;
	}
	/* Printing the binary representation in reverse order */
	for (j = i - 1; j >= 0; j--)
		_putchar(bin_num[j] + 48);
	/* Return the count of binary digits printed */
	return (length);
}
