#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the int to extract the last digit from
 *
 * Return: value of the last digit
 */

int print_last_digit(int i)
{
	int n;

	n = (i % 10);
	if (n < 0)
	{
		n = -n;
	_putchar(n + '0');
	}
	else
		_putchar(n + '0');
	return (n);
}
