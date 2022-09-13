#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: parameter
 * Return: 1 for success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
