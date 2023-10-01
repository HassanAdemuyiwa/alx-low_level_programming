#include <stdio.h>

int main()
{
	int a = 9;
	void *ptr = &a;


	printf("%d\n",*((int*) ptr)); 	
}
