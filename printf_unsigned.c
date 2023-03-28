#include "main.h"
/**
 * printf_unsigned - prints integer value
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last = n % 10, digit, tmp = 1;
	int  in = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		in++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			tmp = tmp * 10;
			num = num / 10;
		}
		num = n;
		while (tmp > 0)
		{
			digit = num / tmp;
			_putchar(digit + '0');
			num = num - (digit * tmp);
			tmp = tmp / 10;
			in++;
		}
	}
	_putchar(last + '0');

	return (in);
}
