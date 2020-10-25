#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char i;

	//Setup Array
	int a[10];
	srand(time(NULL));
	for (i = 0; i < 9; i++)
	{
		a[i] = rand();
	}
	a[9] = 0;

	//Print Array
	for (i = 0; i < 10; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}

	printf("\n\n");

	//Setup 2nd array
	int b[10];
	//Setup array pointers
	int *ap = a;
	int *bp = b;

	//Assign array values
	for (i = 0; i < 10; i++)
	{
		*(bp + i) = *(ap + 9 - i);
	}

	//Print Array
	for (i = 0; i < 10; i++)
	{
		printf("b[%d] = %d\n", i, *(bp + i));
	}

	return 0;
}