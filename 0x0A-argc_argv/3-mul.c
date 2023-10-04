#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints multiple of int passed
 * @result: multiple of the number passed
 * @argc: count of argument passed
 * @argv: pointer of string passed
 *
 * Return: On sucess - 0
 *         On Error  - 1
 * Error: prints error when no arg passed.
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	if (argv[1] && argv[2])
	{
		int result;

		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");

		return (0);
	}

	return (0);
}
