#include<stdio.h>

/**
 *main - print sum of two numbers
 *@argc: number of command line arguments
 *@argv: pointer to an array of command line arguments
 *Return: 0 success , not zero fail
 */

int main(int argc, char *argv[])

{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1] * atoi(argv[2]);
		printf("%d\n", sum);
	}

	else
	{
	printf("error\n");
	return (1);
}
