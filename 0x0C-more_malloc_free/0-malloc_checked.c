#include <main.h>
/**
 * *mallco_checked - allocates memory using and exit it faild
 * @b: int input
 * Return: pointer to array initialize or null
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	printf("Error: malloc failed\n");
	exit(98);
	}
	return (ptr);
}
