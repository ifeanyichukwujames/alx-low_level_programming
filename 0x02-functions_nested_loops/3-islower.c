#include "main.h"

/*
 *
 * _islower - checks for lower case character
 *
 * @c: character to compare
 *
 * Return: Always return 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
