#include "main.h"

/**
 * _putchar - writes the character c to standard output
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	/**
	 * Write the character to sdout using the write function
	 * and return the result
	 */
	return (write(1, &c, 1));
}