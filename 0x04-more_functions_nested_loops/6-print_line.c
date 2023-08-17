#include "main.h"

/**
 * print_line - draws a straight line
 * @n: length of line
 *
 */

void print_line(int n)
{
	int j;

	for (j = 1 ; j <= n ; j++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
