#include "main.h"
#include <stdio.h>

/**
* _memset - fills a memory block with a constant byte 
* @s: address to memory block
*Ab: char to be used
*@n: num ber of bytes to be used
*
* Return: pointer to the memory block
*/

chat *_memset(char *s, char b, unsigned int n)

	while (n)
	{
		s[n - 1] = b;
		n--'
	}
	return (s);
}
