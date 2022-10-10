#include <unistd.h>

/**
 * _putchar - writes the character of c to stdout
 * @c: the character to print
 *
 * Return: return on success 1.
 * error, -1 is returned and error is set approriately
 */

int _putchar(char c)
{
return(write(1, &c, 1));
}
