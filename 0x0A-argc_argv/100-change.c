#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of change
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Always success, 1: Error
 */
int main(int argc, char **argv)
{
	int coin, change;

	change = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		coin = atoi(argv[1]);
		while (coin > 24)
		{
			change += 1;
			coin -= 25;
		}
		while (coin > 9)
		{
			change += 1;
			coin -= 10;
		}
		while (coin > 4)
		{
			change += 1;
			coin -= 5;
		}
		while (coin > 1)
		{
			change += 1;
			coin -= 2;
		}
		if (coin == 1)
		{
			change += 1;
		}
		printf("%d\n", change);
		return (0);
	}
}
