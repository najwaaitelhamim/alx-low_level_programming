
#include "main.h"
/**
* puts_half - a function that prints half of a string character
* @str: string
* Return: void
*/
void puts_half(char *str)
{
char *s = str;
int c = 0;
int i, t;
while (*s != '\0')
{
c++;
s++;
}
t = (c / 2);
if ((c % 2) == 1)
{
t = ((c + 1) / 2);
}
for (i = t; i < c; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

