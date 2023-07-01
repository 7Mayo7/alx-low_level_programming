#include<main.h>
/**
 *_strcat - function that concatenates two strings
 *@dest: pointer destination of intput
 *@src: pointer source of input
 * Return pointer tp string results @dest
 */

char *_strcat(char *dest, char *src)
{

	har *result = dest;


	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';


	return (result);
}
