#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @x: string to print
 */
void _print_rev_recursion(char *x)
{
	if (*x)
	{
		_print_rev_recursion(x + 1);
		_putchar(*x);
	}
}
