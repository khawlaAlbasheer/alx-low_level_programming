#include "main.h"

 /**
  * _isdigit - function that verifies if a  character is a digit or not
  * @c: tested digit
  *
  * Return: 1: if c is digit, and 0: otherwise
  */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	return (0);
}
