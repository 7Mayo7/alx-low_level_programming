#include<stdio.h>

/**
 *main - print number of arguments passed
 *@argc: number of commandline arguments
 *@argv: pointer of array of commandline arguments
 *Return: success 0, not zero fail
 */



int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)

	printf("%d\n", i - 1);
	return (0);
}
