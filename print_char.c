#include "main.h"

/**
 * printf_char - Prints a char.
 * @var: Arguments.
 * 
 * Return: 0 (Success).
 */
int printf_char(va_list var)
{
	char str;

	str = va_arg(var, int);
	_putchar(str);
	return (0);
}
