#include "main.h"
/**
 * main - entry point
 *
 * Description: prints FizzBuzz
 *
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
		else
			print("\n");
	}
	return (0);
}
