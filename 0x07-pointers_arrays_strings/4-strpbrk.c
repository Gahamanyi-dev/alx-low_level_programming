#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @p: parameter one
 * @accept: parameter two
 * Return: a pointer to the byte.
 */
char *_strpbrk(char *p, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
