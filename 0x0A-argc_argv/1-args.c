#include<stdio.h>

/**
 *main - print number of arguments passed
 *@argc: number of commandline arguments
 *@argv: pointer of array of commandline arguments
 *Return: success 0, not zero fail
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
