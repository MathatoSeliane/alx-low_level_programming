#include <stdio.h>
/**
 * main - Print alphabets besides q and e.
 * Return: 0 (Succss)
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; la++)
	{
		if (al != 'e' && al != 'q')
			putchar (al);

	}

	putchar('\n');
	return (0);
}

