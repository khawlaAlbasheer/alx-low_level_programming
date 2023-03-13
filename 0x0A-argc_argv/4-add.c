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
	int i, sum;

	sum = 0;
	if (argc == 1)
	{
		printf("0");
		return (0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (isdigit(argv[i]))
			{
				sum += argv[i];
				printf("%d\n", sum);
				return (0);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
}
