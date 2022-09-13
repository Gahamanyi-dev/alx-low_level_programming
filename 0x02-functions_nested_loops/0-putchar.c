#include "main.h"
/**
 * main - print a text
 *
 * Return: Success
 */
int main(void)
{
    char *sh = "_putchar";

    while (*sh)
      {
        _putchar(*sh);
        sh++;
      }
    _putchar('\n');

    return (0);
}
