#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *@tr: pointer to string.
 *
 *Return: pointer to uppercase string.
 */
char *string_toupper(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		if(str[length] >= 97 && str[length] <= 122)
		{
			str[length] = x[length] - 32;
		}
		length++;
	}
	return (str);
}
