#include "main.h"

/**
 * _strlen_recursion - This function resturns length of string
 * @s: string
 *
 * Return: int length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
