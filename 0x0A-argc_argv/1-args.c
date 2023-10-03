#include <stdio.h>

/**
 * main - Prints the number of argument passed into it.
 * @argc: count of argument passed.
 * @argv: pointer of array of string passed
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
