#include "main.h"
/**
 * printf_dec_int - prints decimal number or integer, because there is no
 * difference in printf() function output while printing a number using
 * %d or %i, but using scanf the difference occurs.
 * @val: argument to print.
 * Return: the number of digits printed to the console.
 */
int printf_dec_int(va_list val)
{
	int n, last, digit, n_copy, length, place;

	n = va_arg(val, int); /*Retrieve integer input from variable argument*/
	last = n % 10; /* Extract the last digit of the integer */
	length = 1; /* Counter for the number of digits in the integer */
	place = 1; /* To keep track of the place value of the digits */
	n /= 10; /* Remove the last digit from the integer */
	n_copy = n; /* Save a copy of the modified integer for later use */
	/**
	 * if the last integer is negative, print a minus sign,
	 * make all positive, and count the minus sign.
	 */
	if (last < 0)
	{
		_putchar('-'); /* Print a minus sign using _putchar function */
		n_copy = -n_copy, n = -n, last = -last;
		length++; /* Increment the lenght to account the minus sign */
	}
	if (n_copy > 0)
	{
		/* Calculate the place value of the highest-order digit */
		while (n_copy / 10 != 0)
		{
			place *= 10, n_copy /= 10;
		}
		n_copy = n;
		while (place > 0) /*Print each digit of integer to console*/
		{
			/* Extract the highest-order digit of the integer */
			digit = n_copy / place;
			/*Convert digit to character, print it to the console*/
			_putchar(digit + '0');
			/* Remove the printed digit from the integer */
			n_copy -= (digit * place);
			place /= 10; /*Decrease place value of the next digit*/
			length++; /* Increment the digit count */
		}
	}
	_putchar(last + '0'); /*Print last digit of the integer to console*/
	return (length); /*Return the number of digits printed to the console*/
}
