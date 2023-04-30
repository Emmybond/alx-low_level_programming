#include "main.h"
/**
 *_memcpy - It represents a function that copies memory area
 *@dest: It represents the memory where it is stored
 *@src: It represents the memory where it is copied
 *@n: It represents the number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

