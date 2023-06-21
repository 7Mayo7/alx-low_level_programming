#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * @(i, j) && result: take the input from another
 * Return:the 9 times table.
*/

void times_table(void)
{
	int num, mult, result;

	for (num = 0; num <= 9; num++)
{
	_putchar(48);
	for (mult = 1; mult <= 9; mult++)
{
	_putchar(',');
	_putchar(' ');

	prod = num * mult;

	if (prod <= 9)
		_putchar(' ');
	else
		_putchar((prod / 10) + 48);
	_putchar((prod % 10) + 48);
}
	_putchar('\n');
}
