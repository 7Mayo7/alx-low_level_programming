#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 * *mallco_checked - allocates memory using malloc
 * @b: num of bytes to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	void *ptr = malloc(b);

	if (ptr == NULL)
	exit(98);

	return (ptr);
}
