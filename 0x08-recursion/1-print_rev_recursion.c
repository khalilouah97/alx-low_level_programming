#include "main.h"

/**
 * _print_rev_recursion - a function print string in reverse
 * @s: pointer variable
 * by : laila tabourit
 * Return: void return nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
