#include "main.h"

/**
 * _pow_recursion - This function returns value of x raised to power of y
 * @x: base value
 * @y: exponent value
 *
 * Return: value of @x raised to power @y
 * error: returns -1 when @y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
