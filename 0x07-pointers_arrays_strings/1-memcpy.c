#include "main.h"
/**
* _memcpy -  a function that copies memory area.
* @dest: char
* @src: char
* @n: integer
* Return: string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r;
for (r = 0; r < n; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
