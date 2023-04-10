#include "holberton.h"
int _putchar(char c);
/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string
 *
 * Return: nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
