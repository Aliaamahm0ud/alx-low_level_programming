#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *x)
{
	if (*x == '\0')
		return (0);
	return (1 + _strlen_recursion(x + 1));
}
