#include <stdio.h>
#include <stdlib.h>

/**
 * main - print possible combination of two-digit
 * numbers
 *
 * Return: return 0 at the end
 */
int main(void)
{
int n1 = 0, n2;

while (n1 <= 99)
{
n2 = n1;
while (n2 <= 99)
{
if (n2 != n1)
{
putchar((n1 / 10) + 48);
putchar((n1 % 10) + 48);
putchar(' ');
putchar((n2 / 10) + 48);
putchar((n2 % 10) + 48);

if (n1 != 98 || n2 != 98)
{
putchar(',');
putchar(' ');
}
}
++n2;
}
++n1;
}
putchar('\n');
return (0);
}
