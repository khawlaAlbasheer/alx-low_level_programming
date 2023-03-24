#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints prints result
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0: always success, 98: argc error, 100: if div = 0
 */
int main(int argc, char **argv)
{
	int (*operator_function)(int, int), num1, num2;
	if (argc != 4)
		printf("Error\n"), exit(98);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	
	operator_function = get_op_func(argv[2]);
	if (!operator_function)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operator_function(num1, num2));
	return (0);
}
