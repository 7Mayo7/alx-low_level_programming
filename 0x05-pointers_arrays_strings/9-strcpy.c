#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 **_strcpy - copies the string pointed to by src including
 *the terminating null byte (\0) to the buffer pointed to by dest
 *@dest: take the input
 *@src: take the input
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
	dest[a] = src[a];

	}
	dest[i++] = '\0';
	return (dest);

}
