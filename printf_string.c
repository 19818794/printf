#include "main.h"

/**
 * printf_string - print a string.
 * @val: argument to print.
 *
 * Return: the length of the printed string.
 */

int printf_string(va_list val)
{
	char *s;
	int i, length;

	/* Extract the string from the variable argument list */
	s = va_arg(val, char *);
	/* If string is NULL, set the string to "(null)" instead */
	if (s == NULL)
		s = "(null)";
	/* Calculate the length of the string using _strlen function */
	length = _strlen(s);
	/* Print each character of the string */
	for (i = 0; i < length; i++)
		_putchar(s[i]);
	/* Return the length of the printed string */
	return (length);
}
