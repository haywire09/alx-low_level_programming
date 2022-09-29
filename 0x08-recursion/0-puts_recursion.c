#include "main.h"

/**
 * _puts_recursion - print's a string follwed by a new line
 * @s: string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
  if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(s[0])
_puts_recursion(s + 1);
}
}
