#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
 /**
 * main -  point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 * Return: 0 if success
 * Return: 0 if successful, 98 if wrong number, 99 if invalid
 *100 if division or modulo by zero
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
	printf("Error\n");
	return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
	printf("Error\n");
	return (100);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
