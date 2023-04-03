#include "main.h"
/**
 * _memset - put a block of memory with a unique value
 * @s: starting address of memory
 * @b: chosen value
 * @n: number of bytes altered
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

