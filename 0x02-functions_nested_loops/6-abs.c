#include "main.h"

/**
 * _abs - Computes the absolute vale of a integer
 * @i: input number as a integer
 * Return: absolute value
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
