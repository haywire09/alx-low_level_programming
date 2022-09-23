#include "main.h"
#include <stdio.h>
#include "100-rot13.c"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char s[] = "ROT13 (\"ro ces\", so-13) is a simple lettion cipher.\n";
char *p;

p = rot13(s);
printf("%s", p)
printf("------------------------------------\n");
printf("%s", s);
printf("------------------------------------\n");
p = rot13(s);
printf("%s", p);
printf("------------------------------------\n");
printf("%s", s);
printf("------------------------------------\n");
p = rot13(s);
printf("%s", p);
printf("------------------------------------\n");
printf("%s", s);
return (0);
}
