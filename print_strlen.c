#include "main.h"

/**
 * _strlen - Returns lenght of a string.
 * @str: The string pointer.
 *
 * Return: i.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		return (i);
}

/**
 * _strlenc - Strlen function for constant char pointer str.
 * @str: Char pointer.
 *
 * Return: i.
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		return (i);
}
