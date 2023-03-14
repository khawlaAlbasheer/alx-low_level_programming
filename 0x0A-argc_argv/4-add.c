#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 always success, 1: one symbol occure
 */
int main(int argc, char **argv)
{
	int i, sum, convert;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			convert = atoi(argv[i]);
			if (convert > 0)
			{
				sum += convert;

			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
