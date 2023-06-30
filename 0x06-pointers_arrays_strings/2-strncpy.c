#include "main.h"
/**
* _strncpy - a function that copies a string.
* @dest: string
* @src: string
* @n: integer
* Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n)
{
dest[j] = '\0';
j++;
}
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
return (dest);
}
