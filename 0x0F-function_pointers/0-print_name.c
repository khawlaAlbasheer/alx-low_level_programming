#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: string
 * @f: function pointer
 * Return: No return value
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
