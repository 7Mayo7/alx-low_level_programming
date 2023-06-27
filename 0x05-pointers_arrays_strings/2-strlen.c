#include"main.h"

/**
 *_strlen - returns the length of a stringi
 *@str: take the input
 * Return: void
 */


int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')

	{
		length++;
	}

	return (length);
}
