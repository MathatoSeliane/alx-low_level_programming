#include <stdio.h>
/**
 * main - Print all pssible combinations of single digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	
	for (a = 48; a < 58; a++)
{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
}
