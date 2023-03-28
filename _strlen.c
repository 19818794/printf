#include "main.h"

/**
 * _strlen - calculates the lenght of a string.
 * @s: the string to be checked.
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	/* Initialize a variable to keep track the length of the string */
	int length = 0;

	/**
	 * Loop through the characters of the string
	 * until the null character is encountered
	 */
	while (s[length] != 0)
		/* Increment the length for each character in the string */
		length++;
	/* Return the length of the string */
	return (length);
}
