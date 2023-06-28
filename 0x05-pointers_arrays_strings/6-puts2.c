#include "main.h"
/**
* puts2 - a function that prints every other character of a strinig
* @str: string
* Return: void
*/
void puts2(char *str)
{
char *s = str;
int c = 0;
int i;
int t = 0;
while (*s != '\0')
{
c++;
s++;
}
t = c - 1;
for (i = 0; i <= t; i++)
{
if (i % 2 == 0)
{
_putchar(str[0]);
}
}
_putchar('\n');
}
