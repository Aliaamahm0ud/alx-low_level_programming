#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */
void print_number(int n);
void print_number(int n)
{
	int temp
	unsigned int n1;

	if (n < 0)
		
	{
		n1 =-n;
		_putchar('-');
	}
      	else
	{
		n1 = n;
	}
        temp=n1/10;
	if (temp)
		print_number(temp);

	_putchar((n1 % 10) + '0');
}
