#include <stdio.h>
/**
 * main - Print all the numbers base 16 in lowercase.
 * Return: 0 (Success)
 */
int main(void)
{
int num;
char al;
	for (num = 0; num <= 16; num++)
		putchar((num % 16) + '0');
	for (al = 'a'; al <= 'f'; al++)
		putchar (al);
putchar('\n');
return (0);
}
