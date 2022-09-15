#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * positive_or_negative - Prints a random number and states either
 * it is positive, negative, or zero.
 * @n: This is interger
 * Return: Always 0.
 */

void positive_or_negative(int n)
{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n <  0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
