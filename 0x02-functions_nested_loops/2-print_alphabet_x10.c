#include "main.h"
/**
*print_alphabet_x10 - function that will print the alphabet 10 times
*/
void print_alphabet_x10(void)
{
int i, ch;
for (i = 0; i <= 9; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
_putchar('\n');
}
}
}
