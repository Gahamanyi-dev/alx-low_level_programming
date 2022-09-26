#include "main.h"

/**
 * _memcpy - copies memory area,
 * @dest: parameter one
 * @src: parameter two
 * @n: parameter three
 * Return: dest pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
