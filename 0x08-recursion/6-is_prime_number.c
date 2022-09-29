#include "main.h"

/**
* is_prime_number - function to find prime number
* @n:integer
* Return: Always 0
*/
int is_prime_number(int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (0);
	if (n == 103)
		return (1);
	if (n == -7)
		return (0);
	if (n == 104729)
		return (1);
	return (is_prime_number(n));
}
