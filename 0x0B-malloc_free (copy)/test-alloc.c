#include <stdio.h>

int main()
{
	int a = 8;
	int *ptr = &a;
	int **pptr = &ptr;

	printf("%d\n", *ptr);
	printf("%d\n", **pptr);
	
}

