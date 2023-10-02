#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes
 *@argc: argument counter
 * @argv: argument vector
 * Return: Error: number of argument is not the correct
 */
int main(int argc, char **argv)
{

	int i;

	/*  Correct # of args  */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/*  Are bytes less than 0  */
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < atoi(argv[1]))
	{
		printf("%02x", *((unsigned char *)main + i));
		i++;
		if (i < atoi(argv[1]))
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
