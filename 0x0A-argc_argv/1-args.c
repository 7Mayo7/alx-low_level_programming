#include<stdio.h>

/**
 *main - print number of arguments passed
 *@argc: number of commandline arg
 *@argv: pointer of array of commandline arg
 *Return: success 0 another fail
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
