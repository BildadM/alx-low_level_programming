#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start of program
 * if - checks if number is positive,negative or zero
 * printf - prints whether number is positive,negative or zero
 *
 * Return: zero if successful
 */

int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}

