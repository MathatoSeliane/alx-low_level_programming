#include <stdio.h>
/**
 * main - Print the alphabet in lower.
 * Return: 0 (Success)
 */
int main(void)
{
	char lcs[26] = 'abcdefghijklmnopqrstuvwxyz';
	int i;

	for (i = '0'; i < '26'; i++)
	{
		putchar(lcs[i]);
	}
	putchar ('\n');
	return (0);
}
