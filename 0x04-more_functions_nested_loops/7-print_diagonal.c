#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is ht enumber of times the \ character should printed
 */

void print_diagonal(int n)
}
	int postn, space;

	if (n <= 0)
	_putchar('\n');

	else
	{
	for  (postn = 1; postn <= n; postn++)
		_putchar('_ ');
	_putchar(92); /*is equal to '/' char*/
	_putchar('\n');
	}
}
