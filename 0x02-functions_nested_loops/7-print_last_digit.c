#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @d: the number
 * Return: value of the last digit.
 */
int print_last_digit(int d)
{
	int ln;

	ln = d % 10;

	if (ln < 0)
	{
	ln = ln * -1;
	}
	_putchar(ln + '0');

	return (ln);
}

