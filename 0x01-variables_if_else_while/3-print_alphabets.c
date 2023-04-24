#include <stdio.h>
/**
 * main - Print the alphabet in lower and uppercase.
 * Return: 0 (Success)
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
		putchar(al);

	for (al = 'A'; al <= 'Z'; al++)
		putchar(al);

	putchar('\n');
	return (0);
}
