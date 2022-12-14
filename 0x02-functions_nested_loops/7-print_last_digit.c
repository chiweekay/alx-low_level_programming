#include "main.h"
#include "6-abs.c"
/**
* print_last_digit - main function
*
* @s: integer to get last digit of
* Return: last digit of s 
*
*/
int print_last_digit(int s)
{
_putchar('0' + _abs(s % 10));
return (_abs(s % 10));
}
