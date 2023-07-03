#include "main.h"
/**
* _memset - a function that fills memory with a constant byte
* @s: char
* @b: char
* @n: integer
* Return: string
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
