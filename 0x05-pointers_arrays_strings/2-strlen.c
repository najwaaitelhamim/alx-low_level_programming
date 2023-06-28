#include "main.h"
/**
* _strlen - a function that returns the length of a string
* @s: string
* Return: integer.
*/
int _strlen(char *s)
{
int c = 0;
while (*s != '\0')
{
c++;
s++;
}
return (c);
}
