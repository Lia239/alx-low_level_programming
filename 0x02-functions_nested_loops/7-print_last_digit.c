#include "main.h"

/**
 * print_last_digit - prints the last digit of an number
 * @n: The value to print the last digit of
 *
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -1 * n;

	_putchar('0' + n);
	return (n);
}

