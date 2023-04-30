#include "main.h"
/**
 * _puts - It implies print a string, followed by a new line, to stdout
 * @str: It represents the string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}


