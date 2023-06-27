#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *rev_string - reverses a string
 *@s: take the input
 *Return: void
 */


void rev_string(char *s)
{

	int length, a, b;

	length = strlen(s);

		for (a = 0, b = length - 1; a < b, a++, b--)

		{
		char x = s[a];

		s[a] = s[b];
		s[b] = x;
		}
}
/**
 *print_rev - reverses and print  a string
 *in reverse followed by a new line
 *@s: take the input
 * Return: void
 */

void print_rev(char *s)
{
	s = "Hello, World!";

	rev_string(s);

	printf("After reversal: %s\n", s);
}
