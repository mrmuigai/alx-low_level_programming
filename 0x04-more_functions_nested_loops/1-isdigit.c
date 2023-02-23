#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: digit being checked
 * Return: 0 if c is a digit 1 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
