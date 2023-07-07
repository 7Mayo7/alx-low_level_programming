#include "main.h"
#include <stdio.h>

/**
 **_memcpy - copies memory area
 *@dest: take the input
 *@src: take the input
 *@n: take the input
 * Return: dest
 */

	char *_memcpy(char *dest, char *src, unsigned int n)
	{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);




	}
