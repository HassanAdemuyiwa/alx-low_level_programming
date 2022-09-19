#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: The string for the returned length.
 *
 * Return: The length of @str.
 */
int _strlen(const char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
