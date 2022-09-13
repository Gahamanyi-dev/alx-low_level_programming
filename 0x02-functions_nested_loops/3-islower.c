#include "main.h"

/**
 * _islower - check if a character is lowercase
 * @c: single letter input
 * Return: 1 for success
 */
int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
            return (1);
        else
            return (0);
}
