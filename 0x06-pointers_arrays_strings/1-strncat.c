#include "main.h"
/**
 *_strncpy - copies a strings
 * @dest:take the input
 *@src:take the input
 * @n:take the input from another
 *Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
	{
	int i

	for (i = 0; i < n && src[i] != '\0'; i++)
	{

	dest[i] = src[i];
	for ( ; i < n; i++)
	{
	dest[i] = '\0';
	}

	return (dest);

	}
