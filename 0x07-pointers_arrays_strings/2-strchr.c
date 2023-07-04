#include "main.h"
#include <stdio.h>

/**
 **_strchr - locates a character in a string
 *@s: take the input
 *@c: take the input
 * Return: s and null
 */

	char *_strchr(char *s, char c)
	{
		while (*s != '\0')
		{
		if (*s == c)
		{
		return (s);
		}
		s++;
		}
		if (c == '\0')
		{
		return (s);
		}
		return (NULL);
	}
