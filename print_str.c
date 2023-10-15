#include "main.h"

/**
 * printf_string - Prints a string.
 * @var: Arguments.
 *
 * Return: Length (Success).
 */
int printf_string(va_list var)
{
	char *str;
	int i;
	int length;

	str = va_arg(var, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for  (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for  (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
