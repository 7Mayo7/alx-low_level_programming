#include <stdio.h>
#include "main.h"

/**
 *string_nconcat - concatenates n bytes of a string to another string
 *@s1: string to append to
 *@s2: string to concatenate from
 *@n: number of bytes from s2 to s1
 *Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1_len, s2_len;
	char *str;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;

	for (s2_len = 0; s2[s1_len] != '\0'; s2_len++)
		;

	str = malloc(s1_len + n + 1);

	if (str == NULL)
	return (str == NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i]

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
		str[i] = '\0';
		return (str);

}
