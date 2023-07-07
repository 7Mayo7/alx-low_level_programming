#include<stdio.h>

/**
 * main - print number of arguments passed into the program
 *@argc: int
 *@argv: list
 *Return: always 0
 */

int main(int argc, char const *argv[])
{
	int x = 0;

	while (argc--)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
