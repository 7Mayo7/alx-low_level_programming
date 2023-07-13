#include <main.h>
/**
 * *mallco_check - allocates memory using and exit it faild
 * @b: int input
 * Return: pointer to array initialize or null
 */

void *malloc_check(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
	exit(98);
	return (x);
}
