#include <stdio.h>

/**
 * main - Prints all argument passed to it.
 * @argc: count of argument passed.
 * @argv: pointer of string array passed.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
