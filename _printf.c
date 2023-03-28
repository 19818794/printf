#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: identifier to look for.
 * @...: a variable number of paramters.
 * Return: the total length of the printed string,
 * excluding the null byte used to end output to strings.
 */
int _printf(const char *format, ...)
{
	va_list args; /* To hold the variable arguments */
	int i, j, length;
	fmt_t fmt[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"%%", printf_37},
		{"%d", printf_dec_int}, {"%i", printf_dec_int},
		{"%b", printf_bin}, {"%u", printf_unsigned}, {"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX}, {"%S", printf_exclusive_string}, {"%p", printf_pointer}

	};/*Array of conversion specifiers and their corresponding functions*/

	va_start(args, format); /*Initialize args with format arguments*/
	i = 0, length = 0;
	/*-1 if the format string is null or if it contains only a single '%'*/
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 11; /* Number of conversion specifiers - 1 */
		/**
		 * Call the corresponding function for the conversion specifier
		 * and  add the return value to the length.
		 */
		while (j >= 0)
		{
			/* Check if current char matches conversion specifier*/
			if (format[i] == fmt[j].specifier[0] &&
				format[i + 1] == fmt[j].specifier[1])
			{
				length += fmt[j].function(args);
				i += 2; /* Skip over the conversion specifie */
				goto Here; /*Jump back to beginning of loop*/
			}
			j--;
		}
		/*Print if it is not conversion specifier using _putchar func*/
		_putchar(format[i]);
		i++, length++; /*Increment length for each character printed*/
	}
	va_end(args); /* End the use of the va_list variable */
	return (length); /* Return the total length of the printed string */
}
