#include "main.h"

/**
 * printf_char - prints a char.
 * @val: argument to print.
 *
 * Return: 1 character.
 */
int printf_char(va_list val)
{
	char c;

	/* Extract the character from the variable argument list */
	c = va_arg(val, int);
	/* Print the character using the _putchar function */
	_putchar(c);
	/* Return 1 to indicate that one character was printed */
	return (1);
}
