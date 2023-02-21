#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */

int print_last_digit(int a)
{
	int digit;

	digit = a % 10;
	if (digit < 0)
	{
		digit = (-1 * digit);
	}
	_putchar(digit + '0');
	return (digit);
}
