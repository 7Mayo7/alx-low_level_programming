#include "main.h"
#include <stdio.h>
/**
 *reset_to_98 - take a pointer to int as parameter
 * then update value it points to 98
 *@n: int parameter
 *Return: void
 */
void reset_to_98(int *n)
{
	int n;

	n = 402;

	int *p;

	p = &n;

	printf("%d\n", n);
	*p = 98;

	printf("n=%d\n", n);

}
