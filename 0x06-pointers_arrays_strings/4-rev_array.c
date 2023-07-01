#include "main.h"
/**
* reverse_array- a function that reverses the content of an array of integers.
* @a: array
* @n: integer
* Return: void
*/
void reverse_array(int *a, int n)
{
int r, i;
for (i = 0; i < n - 1; i++)
{
r = a[i];
a[i] = a[n];
a[n] = r;
}
}
