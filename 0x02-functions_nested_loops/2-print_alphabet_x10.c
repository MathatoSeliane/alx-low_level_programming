#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	char al;
	int i = 0;

	while (i <= 9)
	{
		for (al = 'a'; al <= 'z'; al++)

		{			_putchar(al);
	}
	_putchar('\n');
	i++;
	}
}
