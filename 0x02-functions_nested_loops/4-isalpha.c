#include "main.h"

/**
 * _isalpha - checks if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _isalpha(int c)
{
	if (c >= 'aA' && c <= 'zZ')
		return (1);
	else
		return (0);
}
