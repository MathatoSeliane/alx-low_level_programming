#include <stdio.h>
/**
 * main - Print lowercases follwed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
