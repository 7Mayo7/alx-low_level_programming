#include"main.h"
/**
 *_isdigit - check if c is between 0 and 9
 *@c: input
 *Return: 1 if digit 0:9 and if else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
