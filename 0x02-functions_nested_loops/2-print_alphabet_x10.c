#include "main.h"
/**
* print_alphabet_x10 - prints alphabet 10 times
* Return: always 0;
*
*/
void print_alphabet_x10(void)
{
char p;
char u;
for (u = 0; u <= 9; u++)
{
for (p = 'a'; p <= 'z'; p++)
{
_putchar(p);
}
_putchar('\n');
}
}
