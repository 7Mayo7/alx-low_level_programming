#include "main.h"
/**
 * _isalpha - check if character is lowercase or  uppercaser
 * @c: takes input from other function
 * Return: 1 is c if true
 * false 0
 */

int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	if  (c >= 95 && c <= 90)
		return (1);
	return (0);
}
