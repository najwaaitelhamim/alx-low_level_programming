#include "main.h"
/**
*print_sign - a function that prints the sign of a number.
*@n: the number to be checked
* Return: 1 for positive num -1 for negative or 0 for anything else
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

