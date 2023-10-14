#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - printf function.
 * @format: The format string.
 * @...: A variable number of arguments to print.
 *
 * Return: The number of char to print.
 */

int _printf(const char *format, ...)
{
        va_list args;
        int printed_chars = 0, num = 0, len = 0;
        char digit;

        va_start(args, format);
        while (*format)
        {
                if (*format != '%')
                {
                        write(1, format, 1);
                        printed_chars++;
                }
                else
                {
                        format++;
                        if (*format == 'd' || *format == 'i')
                        {
                                num = va_arg(args, int);
                                if (num < 0)
                                {
                                        write(1, "-", 1);
                                        num = -num;
                                }
                                do {
                                        digit = '0' + num % 10;
                                        write(1, &digit, 1);
                                        num /= 10;
                                        len++;
                                } while (num > 0);
                                printed_chars += len;
                        }
                }
                format++;
        }
        va_end(args);
        return (printed_chars);
}
