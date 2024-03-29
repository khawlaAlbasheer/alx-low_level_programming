#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two positive numbers.
 * @argc: argument counter
 * @argv: argument vector
 * Return: Error if the number of arguments is incorrect.
 */
int main(int argc, char *argv[])
{
	unsigned long int m;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	m = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", m);
	return (0);
}
