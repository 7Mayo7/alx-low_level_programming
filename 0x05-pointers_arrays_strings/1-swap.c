"main.h"

/**
 *swap_int -  swap the value of two integers
 *@a: switch the input with the other
 *@b: swith the input with the other
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
