#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Always success
 */
int main(int argc, char **argv)
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	else
	{

		printf("Error\n");
		return (1);
	}
}
