#include "main.h"

/**
 * print_alphabet_x10 - prints alphabtes 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char lower;

	for (ten = 0; ten <= 9; ten++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
			_putchar(lower);
		_putchar('\n');
	}
}

