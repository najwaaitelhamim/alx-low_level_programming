#include "main.h"
/**
*_strstr - a function that searches a string for any of a set of bytes.
* @haystack: char
* @needle: char
* Return: string
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *P = needle;
while (*l == *p && *p != '\0')
{
l++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}

