#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - It implies print name using pointer to function
 * @name: It represents string to add
 * @f: It represents pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

