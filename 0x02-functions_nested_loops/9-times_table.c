#include "main.h"
/**
* times_table - times table function
*/
void times_table(void)
{
int i;
int s;
for (i = 0; i <= 9; i++)
{
for (s = 0; s <= 9; s++)
{
int prod = s * i;
if (s == 0)
{
_putchar('0');
} else if (prod <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(prod + '0');
} else
{
_putchar(',');
_putchar(' ');
_putchar(prod / 10 + '0');
_putchar(prod % 10 + '0');
}
}
_putchar('\n');
}
}
