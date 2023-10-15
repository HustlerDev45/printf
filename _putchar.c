#include "main.h"

/**
 * _putchar - displays characters in the std output
 *
 * @c: character to be displayed
 *
 * Return: write
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
