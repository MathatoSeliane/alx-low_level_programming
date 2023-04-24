#include <stdio.h>
/**
 * main - Print all pssible combinations of single digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (n = 48; n < 58; n++)

		putchar(n);
		if (n != 57)
		{
			putchar(','0);
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
