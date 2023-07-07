#include <string.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: take the input
 * @src: take the input
 * @n: take the input
 * Return: result
*/

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	while (*dest != '\0')
	{
	dest++;
	}

	while (i < n && *src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	i++;
	}
	*dest = '\0';
	return (result);
}

