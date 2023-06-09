#ifndef MAIN_H
#define MAIN_H

/*
 * Desc: header file containing all libraries, structures, and prototypes used
 * by `printf` project.
 */

/* Libraries */
/*
 * Includes the definitions for standard library functions,
 * like malloc(), free(), exit(), etc.
 */
#include <stdlib.h>
/*
 * Includes the definitions for functions that support variable argument lists,
 * like va_start(), va_arg(), va_end(), etc.
 */
#include <stdarg.h>
/*
 * Includes the definitions for POSIX operating system API,
 * such as write() for output to stdout.
 */
#include <unistd.h>

/* Structures */
/**
 * struct format - type struct format
 * @specifier: pointer of the conversion specifiers such as c, s, d, i, etc.
 * @function: type pointer to function for the conversion specifier.
 *
 * Description: match the conversion specifiers for printf.
 */
typedef struct format
{
	char *specifier;
	int (*function)();
} fmt_t;

/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int _strlen(char *s);
int printf_string(va_list val);
int printf_37(void);
int printf_dec_int(va_list val);
int printf_bin(va_list val);
int printf_unsigned(va_list args);
int printf_oct(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_exclusive_string(va_list val);
int printf_HEX_aux(unsigned int num);
int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
#endif
