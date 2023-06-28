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
t = c - 1;
for (i = (t / 2); i < t; i++)
{
_putchar(str[i]);
}
}
