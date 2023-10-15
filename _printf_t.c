#include "main.h"

/**
 * _printf - Print output to stdout.
 * @format: String
 *
 * Return: The number of chars printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int count = 0; // Number of characters printed

	while (*format != '\0') {
		if (*format == '%') {
			format++; // Move to the next character after '%'
			if (*format == '\0') {
				break; // End of the format string, exit the loop
			}
			if (*format == 'c') {
				char c = va_arg(args, int); // Get the next argument as a character
				putchar(c); // Write the character to stdout
				count++;
			} else if (*format == 's') {
				char *str = va_arg(args, char *); // Get the next argument as a string
				while (*str) {
					putchar(*str); // Write each character of the string to stdout
					str++;
					count++;
				}
			} else if (*format == '%') {
				putchar('%'); // Write a literal '%' character to stdout
				count++;
			}
		} else {
			putchar(*format); // Write the ordinary character to stdout
			count++;
		}
		format++; // Move to the next character in the format string
	}

	va_end(args);
	return count;
}
