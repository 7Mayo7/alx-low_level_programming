#include "main.h"

/**
 * _strcmp - compares two strings
 * * @s1: take the input
 * @s2:take the input
 * Return: 0 if (Success) else
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
	if (s1[i] == '\0' || s2[i] == '\0')
	{
	break;
	}
	i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
	return (0);
	}
	else
	{
	return (s1[i] - s2[i]);
	}
}
