#include "main.h"

/**
 * factorial - This function returns factorial of a given number
 * @n: number passed into th function
 *
 * Return: factorial of a number
 * error: return -1 when n is lower than 0
 */
int factorial(int n)
{
	int fact = n;
		
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	
	fact *= factorial(n - 1);

	return (fact);
}
				
