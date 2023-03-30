#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */

void print_number(int n)
{
	int temp
	unsigned int n1;

	if (n < 0)
		
	{
		n1 =-n;
		putchar('-');
	}
      	else
	{
		n1 = n;
	}
        temp=n1/10;
	if (n1/10)
		print_number(n1/10);
	else
	putchar((n1 % 10) + '0');
}
